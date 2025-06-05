/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:40:49 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/30 14:40:49 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception 
        {
            public:
                const char* what() const throw();
        };

        const std::string   getName();
        const unsigned int  getGrade();

		void	incrementGrade();
		void	decrementGrade();

    private:

        const std::string   _name;
        unsigned int        _grade;
};
