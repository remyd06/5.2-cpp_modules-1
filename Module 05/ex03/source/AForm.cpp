/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 04:16:02 by rdedola           #+#    #+#             */
/*   Updated: 2025/10/22 04:16:02 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
	: _name("Form"), _isSigned(0), _requireToSign(100), _requireToExecute(50)
{
	
}

AForm::AForm(const std::string name, const unsigned int requireToSign, const unsigned int requireToExecute)
	: _name(name), _isSigned(0), _requireToSign(requireToSign), _requireToExecute(requireToExecute)
{
	if (_requireToSign < 1)
		throw(GradeTooHighExeption());
	else if (_requireToSign > 150)
		throw(GradeTooLowExeption());

	if (_requireToExecute < 1)
		throw(GradeTooHighExeption());
	else if (_requireToExecute > 150)
		throw(GradeTooLowExeption());
}

AForm::AForm(const AForm &copy)
	: _name(copy._name), _requireToSign(copy._requireToSign), _requireToExecute(copy._requireToExecute)
{
}

AForm &AForm::operator=(const AForm &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

const char*	AForm::GradeTooHighExeption::what() const throw()
{
	return ("Grade too high !");
}

const char *AForm::GradeTooLowExeption::what() const throw()
{
	return ("Grade too low !");
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

unsigned int	AForm::getGradeToSign() const
{
	return (this->_requireToSign);
}

unsigned int	AForm::getGradeToExecute() const
{
	return (this->_requireToExecute);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= _requireToSign)
		_isSigned = 1;
	else
		throw(GradeTooLowExeption());
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!this->_isSigned)
	 	throw (std::runtime_error("Not signed !"));
	if (executor.getGrade() > this->_requireToExecute)
		throw (GradeTooLowExeption());
	else
		this->doAction();
}

std::ostream	&operator<<(std::ostream &out, const AForm &context)
{
	out << "\nForm: " << context.getName() << "\n" << "Grade to sign: " << context.getGradeToSign() << "\n" << "Grade to execute: " << context.getGradeToExecute() << "\n" << "Is signed :" << context.getIsSigned() << "\n";
	return (out);
}

AForm::~AForm()
{
	std::cout << "Form destructor called !" << std::endl;
}