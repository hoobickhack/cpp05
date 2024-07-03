/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:31:37 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 19:56:49 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

#include "ShrubberyCreationForm.hpp"

#include "RobotomyRequestForm.hpp"

#include "PresidentialPardonForm.hpp"

class AForm;

class Intern{

public :

Intern();
Intern(const Intern &instance);
Intern& operator=(const Intern &instance);
~Intern();

AForm* createPresidentialPardonForm(const std::string &target);
AForm* createRobotomyRequestForm(const std::string &target);
AForm* createShrubberyCreationForm(const std::string &target);

AForm *makeForm(const std::string name, const std::string target);

};