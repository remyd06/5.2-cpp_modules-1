/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:57:27 by rdedola           #+#    #+#             */
/*   Updated: 2025/06/26 20:57:27 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	:   _name("Default"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false)
{
	std::cout << "Form default constructor called\n";
}

Form::Form(const std::string name, const int GradeToSign, const int GradeToExecute)
	:   _name(name), _gradeToSign(GradeToSign), _gradeToExecute(GradeToExecute), _isSigned(false)
{
		if (_gradeToSign < 1)
			throw (GradeTooHighException());
		else if (_gradeToSign > 150)
			throw (GradeTooLowException());

		if (_gradeToExecute < 1)
			throw (GradeTooHighException());
		else if (_gradeToExecute > 150)
			throw (GradeTooLowException());
}

Form::Form(const Form &copy)
	:   _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _isSigned(copy._isSigned)
{

}

Form    &Form::operator=(const Form &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called\n";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

const char* Form::AlreadySigned::what() const throw()
{
	return ("Already signed !");
}


const std::string&   Form::getName() const
{
	return (this->_name);
}

int   Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int   Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool    Form::getIsSigned() const
{
	return this->_isSigned;
}

void    Form::beSigned(const Bureaucrat& b)
{
	if (this->_isSigned)
		throw AlreadySigned();
	if ((int)b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &context)
{
	out << "\nForm: " << context.getName() << "\n" << "Grade to sign: " << context.getGradeToSign() << "\n" << "Grade to execute: " << context.getGradeToExecute() << "\n" << "Is signed :" << context.getIsSigned() << "\n";
	return (out);
}