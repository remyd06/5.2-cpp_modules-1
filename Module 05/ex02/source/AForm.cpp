/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 20:57:27 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:11:27 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
	:   _name("Default"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false)
{
	std::cout << "Form default constructor called\n";
}

AForm::AForm(const std::string name, const int GradeToSign, const int GradeToExecute)
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

AForm::AForm(const AForm &copy)
	:   _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _isSigned(copy._isSigned)
{

}

AForm    &AForm::operator=(const AForm &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Form destructor called\n";
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low");
}

const char* AForm::AlreadySigned::what() const throw()
{
	return ("Already signed !");
}

const char* AForm::NotSigned::what() const throw()
{
	return ("Not signed !");
}

const std::string&   AForm::getName() const
{
	return (this->_name);
}

int   AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int   AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool    AForm::getIsSigned() const
{
	return this->_isSigned;
}

void    AForm::beSigned(const Bureaucrat& b)
{
	if (this->_isSigned)
		throw AlreadySigned();
	if ((int)b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	this->_isSigned = true;
}

void	AForm::execute(Bureaucrat const& executor) const
{
	if (!this->_isSigned)
		throw NotSigned();
	if ((const int)executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else
		this->doAction();
}

std::ostream	&operator<<(std::ostream &out, const AForm &context)
{
	out << "\nForm: " << context.getName() << "\n" << "Grade to sign: " << context.getGradeToSign() << "\n" << "Grade to execute: " << context.getGradeToExecute() << "\n" << "Is signed :" << context.getIsSigned() << "\n";
	return (out);
}
