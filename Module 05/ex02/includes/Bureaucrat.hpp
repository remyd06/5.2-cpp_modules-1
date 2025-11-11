/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:44:47 by rdedola           #+#    #+#             */
/*   Updated: 2025/10/21 22:44:47 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
		
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat &copy);
		~Bureaucrat();

		class GradeToHighExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
		class GradeToLowExeption : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		const std::string	getName() const;
		unsigned int		getGrade() const;

		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm &f);
		void				executeForm(AForm const &form) const;
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &context);