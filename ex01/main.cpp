/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:32:03 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 17:04:08 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat high("ilyes", 1);
		std::cout << high << std::endl;
		high.incrementeGrade();
		std::cout << high << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Exception 1 : " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try
	{
		Bureaucrat falsee("grand", 0);
		std::cout << falsee << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Exception 2 : " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat fals("petit", 151);
		std::cout << fals << std::endl;
		fals.decrementeGrade();
	}
	catch(std::exception &e){
		std::cerr << "Exception 3: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try{
		Bureaucrat Boss("Boos", 10);
		std::cout << Boss << std::endl;
		for (int i = 0 ; i < 5; i++)
			Boss.incrementeGrade();
		std::cout << Boss << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Exception 4: " << e.what() << std::endl;
	}


	std::cout << std::endl;
	
		try{
		Bureaucrat player("player", 100);
		std::cout << player << std::endl;
		for (int i = 0 ; i < 10; i++)
			player.decrementeGrade();
		std::cout << player << std::endl;
	}
	catch(std::exception &e){
		std::cerr << "Exception 5: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "signature :" << std::endl;;
	std::cout << std::endl;

	try {
        Bureaucrat signatory("John", 40);
        std::cout << signatory << std::endl;
        Form form1("Form1", 50, 25);
        std::cout << form1 << std::endl;

        signatory.signForm(form1);
        std::cout << form1 << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception 6: " << e.what() << std::endl;
    }

    std::cout << std::endl;

    try {
        Bureaucrat signatory("Doe", 29);
        std::cout << signatory << std::endl;
        Form form2("Form2", 30, 10);
        std::cout << form2 << std::endl;

        signatory.signForm(form2);
        std::cout << form2 << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception 7: " << e.what() << std::endl;
    }

    return 0;
	
}