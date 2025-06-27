/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:40:51 by rdedola           #+#    #+#             */
/*   Updated: 2025/06/26 20:40:51 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const std::string name, const int GradeToSign, const int GradeToExecute);
		Form(const Form &copy);
		Form &operator=(const Form &copy);
		~Form();

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

		
		const std::string&	getName() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		bool				getIsSigned() const;
		
		void	beSigned(const Bureaucrat& b);
		
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;

};

std::ostream	&operator<<(std::ostream &out, const Form &context);