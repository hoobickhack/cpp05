/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:51:14 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/02 17:05:41 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 145, 137), target("Def"){}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 145, 137), target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &instance): AForm(instance), target(instance.target){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &instance){

	AForm::operator=(instance);
	this->target = instance.target;
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

