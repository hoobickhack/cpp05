/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:49:13 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/02 17:42:24 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 145, 137), target("Def"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 145, 137), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance): AForm(instance), target(instance.target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &instance){

	AForm::operator=(instance);
	this->target = instance.target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	std::cout << "Drilling noises..." << std::endl;
	if (std::rand() % 2)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy of " << this->target << " failed." << std::endl;
}
