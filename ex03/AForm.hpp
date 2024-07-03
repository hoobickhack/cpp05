/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:08:25 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 17:05:59 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

private:

	const std::string name;
	bool isSigned;
	const int gradeTosign;
	const int gradeToExecute;

public:

	AForm();
	AForm(const std::string name, const int tosign, const int exec);
	AForm(const AForm &instance);
	AForm& operator=(const AForm &instance);
	virtual ~AForm();
	
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

	class SignedException : public std ::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &instance);