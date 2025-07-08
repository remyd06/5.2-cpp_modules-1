/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 21:14:58 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:09:38 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class  RobotomyRequestForm : public AForm
{
public:
	 RobotomyRequestForm(const std::string& target);
	~ RobotomyRequestForm();

protected:
	 void doAction() const;

private:
	std::string	target;
};
