/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:55:51 by rdedola           #+#    #+#             */
/*   Updated: 2025/05/30 14:55:51 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
    :   _name("Default"), _grade(150)
{
    std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
    :   _name(name), _grade(grade)
{
    try
    {
        if (_grade < 1)
            throw (GradeTooLowException());
        else if (_grade > 150)
            throw (GradeTooLowException());
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
    :   _name(copy._name), _grade(copy._grade)
{

}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &copy)
{
    this->_grade = copy._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called\n";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    
}