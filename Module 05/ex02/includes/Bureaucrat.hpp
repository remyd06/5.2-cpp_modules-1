/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:40:49 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:04:15 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &copy);
		~Bureaucrat();

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

		const std::string&	getName() const;
		unsigned int	getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm& f);
		void 	executeForm(AForm const& form) const;

	private:

		const std::string   _name;
		unsigned int        _grade;
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &context);
