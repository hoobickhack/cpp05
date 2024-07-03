/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:19:07 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 16:48:26 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include <exception>

#include <cstdlib>

#include <string>

#include "AForm.hpp"


class AForm;

class Bureaucrat
{
private:
	const std :: string name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int g);
	Bureaucrat(const Bureaucrat &instance);
	Bureaucrat& operator=(const Bureaucrat &instance);
	~Bureaucrat();

	const std::string getName()const;
	int getGrade()const;
	
	void incrementeGrade();
	void decrementeGrade();

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

	void signForm(AForm &form) const;
	void executeForm(AForm const &form) const;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &instance);

