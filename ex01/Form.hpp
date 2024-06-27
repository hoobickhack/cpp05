/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:08:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/27 18:16:05 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:

	const std::string name;
	bool isSigned;
	const int gradeTosign;
	const int gradeToExecute;

public:

	Form();
	Form(const std::string name, const int tosign, const int exec);
	Form(const Form &instance);
	Form& operator=(const Form &instance);
	~Form();
	
	const std::string getName()const ;
	bool isFormSigned()const ;
	int getGradeToSign()const ; 
	int getGradeToExecute()const ; 

	void beSigned(const Bureaucrat &bureau);

	class GradeTooHighException : public std ::exception
	{
		public:
			virtual const char* what() const throw();		
	};

	class GradeTooLowException : public std ::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
};

std::ostream &operator<<(std::ostream &out, const Form &instance);