/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:32:03 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 20:15:22 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "PresidentialPardonForm.hpp"

#include "ShrubberyCreationForm.hpp"

#include "RobotomyRequestForm.hpp"

// int main()
// {
// 	std::cout << std::endl;
// 	std::cout << "signature :" << std::endl;;
// 	std::cout << std::endl;

// 	try {
//         Bureaucrat signatory("John", 3);
//         std::cout << signatory << std::endl;
//         PresidentialPardonForm form("Me");

//         signatory.signForm(form);
// 		signatory.executeForm(form);
//         std::cout << form << std::endl;
		
//     } catch (std::exception &e) {
//         std::cerr << "Exception 6: " << e.what() << std::endl;
//     }

//     std::cout << std::endl;

// 	try {
//         Bureaucrat signatory("Nico", 40);
//         std::cout << signatory << std::endl;
//         RobotomyRequestForm form1("formoui");

//         signatory.signForm(form1);
// 		signatory.executeForm(form1);
//         std::cout << form1 << std::endl;
		
//     } catch (std::exception &e) {
//         std::cerr << "Exception 6: " << e.what() << std::endl;
//     }

//     std::cout << std::endl;

//     try {
//         Bureaucrat signatory("Doe", 134);
//         std::cout << signatory << std::endl;
//         ShrubberyCreationForm form2("TO");

//         signatory.signForm(form2);
// 		signatory.executeForm(form2);
//         std::cout << form2 << std::endl;
//     } catch (std::exception &e) {
//         std::cerr << "Exception 7: " << e.what() << std::endl;
//     }

//     return 0;
	
// }

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* form;

    form = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }
    
    std::cout << std::endl;

    form = someRandomIntern.makeForm("ShrubberyCreationForm", "Home");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }
    
    std::cout << std::endl;

    form = someRandomIntern.makeForm("RobotomyRequestForm", "Alice");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }
    
    std::cout << std::endl;

    form = someRandomIntern.makeForm("invalid form", "Test");
    if (form) {
        std::cout << *form << std::endl;
        delete form;
    }

    return 0;
}