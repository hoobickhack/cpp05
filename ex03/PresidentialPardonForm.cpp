/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:51:14 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 16:49:39 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), target("Def"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5), target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance): AForm(instance), target(instance.target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &instance){

	AForm::operator=(instance);
	this->target = instance.target;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	
	if (!(isFormSigned()))
		throw AForm::SignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	
	std::cout << "Informs that " << this->target << " has been pardoned by Zaphod Beeblebrox." << std:: endl;
	}

