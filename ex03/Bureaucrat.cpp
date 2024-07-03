/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:24:37 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 16:57:56 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("default"), grade(150){}

Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade){
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &instance){
	*this = instance;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &instance){
	this->grade = instance.grade;
	return(*this);
}

Bureaucrat::~Bureaucrat(){}


const std :: string Bureaucrat::getName() const {
	return(this->name);
}


int Bureaucrat::getGrade()const {
	return(this->grade);
}

void Bureaucrat::incrementeGrade(){
	this->grade --;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementeGrade(){
	this->grade ++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return("Grade too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return("Grade too Low");
}

std::ostream &operator<<(std ::ostream &out, const Bureaucrat &instance){
	out << instance.getName() << " , bureaucrat grade " << instance.getGrade() << ".";
	return(out);
}

void Bureaucrat::signForm(AForm &form) const{
	try {
		form.beSigned (*this);
		if (form.isFormSigned() == true)
		std :: cout << *this << " signed ( "  << form << ")" <<std::endl;
	}
	catch (std ::exception &e){
		std :: cout << *this << " couldn't sign ( " << form << ")"<< " because " << e.what() << std::endl;		
	}
}

void Bureaucrat::executeForm(AForm const &form) const{
	try {
		form.execute(*this);
		std::cout << *this << " executed (" << form << ")" << std::endl;
	}
	catch (std ::exception &e){
		std::cout << *this << " not executed (" << form << ")" << std::endl;
	}
		
}






