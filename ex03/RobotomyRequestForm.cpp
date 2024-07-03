/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:49:13 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 17:13:52 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), target("Def"){}

RobotomyRequestForm::RobotomyRequestForm(const std::string target): AForm("RobotomyRequestForm", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &instance): AForm(instance), target(instance.target){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &instance){

	AForm::operator=(instance);
	this->target = instance.target;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	
	if (!(isFormSigned()))
		throw AForm::SignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
		
	std::cout << "Drilling noises..." << std::endl;
	srand(time(0));
    if (rand() % 2 == 0)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy of " << this->target << " failed." << std::endl;

}
