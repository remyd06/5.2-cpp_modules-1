/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:55:51 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:22:38 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
	:   _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
	:   _name(name), _grade(grade)
{
		if (_grade < 1)
			throw (GradeTooHighException());
		else if (_grade > 150)
			throw (GradeTooLowException());
		std::cout << "Bureaucrat constructor called\n";
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
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}



const std::string&	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
		if (this->_grade <= 1)
			throw GradeTooHighException();
		else
			this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
		if (this->_grade >= 150)
			throw GradeTooLowException();
		else
			this->_grade++;
}

void Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	} 
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn’t sign " << f.getName()
		          << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form) const
{
	try 
	{
        form.execute(*this);
        std::cout << this->_name << " executed " << form.getName() << std::endl;
    } 
	catch (std::exception const &e)
	{
        std::cout << this->_name << " couldn't execute " << form.getName()
                  << " because " << e.what() << std::endl;
    }
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &context)
{
	out << context.getName() << ", bureaucrat grade " << context.getGrade();
	return (out);
}
