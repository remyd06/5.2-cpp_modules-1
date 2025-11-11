/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:51:15 by rdedola           #+#    #+#             */
/*   Updated: 2025/11/11 14:51:15 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	:   AForm::AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "Unknown target";
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	:   AForm::AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
:	AForm(copy)
{
	this->_target = copy._target;
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	this->_target = copy._target;
	return (*this);
}

void    ShrubberyCreationForm::doAction() const
{
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (!file)
		throw(std::runtime_error("File open failed."));

file << "                                                              .                "<< std::endl;
file << "                                               .         ;                     "<< std::endl;
file << "                  .              .              ;%     ;;                      "<< std::endl;
file << "                    ,           ,                :;%  %;                       "<< std::endl;
file << "                     :         ;                   :;%;'     .,                "<< std::endl;
file << "            ,.        %;     %;            ;        %;'    ,;                  "<< std::endl;
file << "              ;       ;%;  %%;        ,     %;    ;%;    ,%'                   "<< std::endl;
file << "               %;       %;%;      ,  ;       %;  ;%;   ,%;'                    "<< std::endl;
file << "                ;%;      %;        ;%;        % ;%;  ,%;'                      "<< std::endl;
file << "                 `%;.     ;%;     %;'         `;%%;.%;'                        "<< std::endl;
file << "                  `:;%.    ;%%. %@;        %; ;@%;%'                           "<< std::endl;
file << "                     `:%;.  :;bd%;          %;@%;'                             "<< std::endl;
file << "                       `@%:.  :;%.         ;@@%;'                              "<< std::endl;
file << "                         `@%.  `;@%.      ;@@%;                                "<< std::endl;
file << "                           `@%%. `@%%    ;@@%;                                 "<< std::endl;
file << "                             ;@%. :@%%  %@@%;                                  "<< std::endl;
file << "                               %@bd%%%bd%%:;                                   "<< std::endl;
file << "                                 #@%%%%%:;;                                    "<< std::endl;
file << "                                 %@@%%%::;                                     "<< std::endl;
file << "                                 %@@@%(o);  . '                                "<< std::endl;
file << "                                 %@@@o%;:(.,'                                  "<< std::endl;
file << "                             `.. %@@@o%::;                                     "<< std::endl;
file << "                                `)@@@o%::;                                     "<< std::endl;
file << "                                 %@@(o)::;                                     "<< std::endl;
file << "                                .%@@@@%::;                                     "<< std::endl;
file << "                                ;%@@@@%::;.                                    "<< std::endl;
file << "                               ;%@@@@%%:;;;.                                   "<< std::endl;
file << "                           ...;%@@@@@%%:;;;;,..                                "<< std::endl;

file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called !" << std::endl;
}
