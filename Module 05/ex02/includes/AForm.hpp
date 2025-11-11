/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 04:07:28 by rdedola           #+#    #+#             */
/*   Updated: 2025/10/22 04:07:28 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;
class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const unsigned int	_requireToSign;
		const unsigned int	_requireToExecute;
	public:
		AForm();
		AForm(const std::string name, const unsigned int requireToSign, const unsigned int requireToExecute);
		AForm(const AForm &copy);
		AForm& operator=(const AForm &copy);
		~AForm();

		class GradeTooHighExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		std::string		getName() const;
		bool			getIsSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;

		void			beSigned(const Bureaucrat &b);
		void			execute(Bureaucrat const &executor) const;
		virtual void	doAction() const = 0;
};

std::ostream&   operator<<(std::ostream &out, const AForm &context);