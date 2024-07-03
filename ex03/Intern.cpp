/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:57:06 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 20:09:30 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){};

Intern::Intern(const Intern &instance){
	*this = instance;
}

Intern& Intern::operator=(const Intern &instance)
{
	(void)instance;
	return (*this);
}

Intern::~Intern(){};

AForm* Intern::createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm* Intern::createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(const std::string name,const  std::string target){
	std::string formNames[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
 	
	AForm* (Intern::*formCreators[3])(const std::string &) = {
		&Intern::createPresidentialPardonForm,
    	&Intern::createRobotomyRequestForm,
        &Intern::createShrubberyCreationForm	
    };

	for (int i = 0; i < 3; i++){
		if (formNames[i] == name) {
            std::cout << "Intern creates " << target << " form" << std::endl;
            return (this->*formCreators[i])(target);
		}
	}
	std::cerr << "Form not found" << std::endl;
	return (NULL);
}