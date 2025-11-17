/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:48:40 by rdedola           #+#    #+#             */
/*   Updated: 2025/10/21 22:48:40 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat()
	:   _name("Bureaucrat"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade)
	:   _name(name), _grade(grade)
{
	if (grade < 1)
		throw (GradeToHighExeption());
	else if (grade > 150)
		throw (GradeToLowExeption());
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
	:   _name(copy._name), _grade(copy._grade)
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->_grade = copy._grade;
	return (*this);
}

const char*	Bureaucrat::GradeToHighExeption::what() const throw()
{
	return ("Grade too high !");
}

const char* Bureaucrat::GradeToLowExeption::what() const throw()
{
	return ("Grade too low !");
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade == 1)
		throw (GradeToHighExeption());
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade == 150)
		throw (GradeToLowExeption());
	else
		_grade++;
}

void	Bureaucrat::signForm(AForm &f)
{
	try
	{
		if (!f.getIsSigned())
		{
			f.beSigned(*this);
			std::cout << this->_name << " signed " << f.getName() << std::endl;
		}
		else if (f.getIsSigned())
			throw(std::runtime_error("this form is already signed !"));
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign " << f.getName() << " beacause " << e.what() << std::endl;
	}
	
}

void	Bureaucrat::executeForm(AForm const &f) const
{
	try
	{
		f.execute(*this);
		std::cout << this->_name << " executed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute " << f.getName() << " beacause " << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &context)
{
	out << context.getName() << ", bureaucrat grade " << context.getGrade();
	return (out);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called !" << std::endl;
}
