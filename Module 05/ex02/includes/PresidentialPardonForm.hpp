/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdedola <rdedola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:42:47 by rdedola           #+#    #+#             */
/*   Updated: 2025/07/08 16:50:22 by rdedola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class  PresidentialPardonForm : public AForm
{
public:
	 PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();

protected:
	 void doAction() const;

private:
	std::string	target;
};
