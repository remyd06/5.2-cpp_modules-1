/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:40:51 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:14:56 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const std::string name, const int GradeToSign, const int GradeToExecute);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &copy);
		~AForm();

		class GradeTooHighException : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};

		class AlreadySigned : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};

		class NotSigned : public std::exception 
		{
			public:
				virtual const char* what() const throw();
		};

		
		const std::string&	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				getIsSigned() const;
		
		void				beSigned(const Bureaucrat& b);
		void 				execute(Bureaucrat const& executor) const;
		virtual void 		doAction() const = 0;
		
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;

};

std::ostream	&operator<<(std::ostream &out, const AForm &context);
