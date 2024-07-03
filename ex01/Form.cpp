/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:40:40 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 15:56:50 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Defo"), isSigned(false), gradeTosign(150), gradeToExecute(150){}

Form::Form(const std::string name, const int tosign, const int exec)
:name(name), isSigned(false), gradeTosign(tosign), gradeToExecute(exec){
	if (this->gradeTosign < 1 || this->gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (this->gradeTosign > 150 || this->gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &instance)
:name(instance.name), isSigned(instance.isSigned), gradeTosign(instance.gradeTosign)
, gradeToExecute(instance.gradeToExecute){
}

Form& Form::operator=(const Form &instance){
	this->isSigned = instance.isSigned;
	return(*this);
}

Form::~Form(){}

const std::string Form::getName() const {
	return this->name;
}

bool Form::isFormSigned()const {
	return this->isSigned;
}

int Form::getGradeToSign()const{
	return this->gradeTosign;
}

int Form::getGradeToExecute()const{
	return this->gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureau){
	if (bureau.getGrade() <= this->gradeTosign)
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw(){
	return("Grade to high");
}

const char* Form::GradeTooLowException::what() const throw(){
	return("Grade to Low");
}

std::ostream &operator<<(std::ostream &out, const Form &instance){
	out << instance.getName();
	if (instance.isFormSigned() == true)
		out << " is signed ";
	else
		out << " not signed ";
	out << " grade to sign : " <<instance.getGradeToSign() << " , grade to execute : ";
	out << instance.getGradeToExecute() << " ";
	return out;
}

