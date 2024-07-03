/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:40:40 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 17:05:50 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("Defo"), isSigned(false), gradeTosign(150), gradeToExecute(150){}

AForm::AForm(const std::string name, const int tosign, const int exec)
:name(name), isSigned(false), gradeTosign(tosign), gradeToExecute(exec){
	if (this->gradeTosign < 1 || this->gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (this->gradeTosign > 150 || this->gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &instance)
:name(instance.name), isSigned(instance.isSigned), gradeTosign(instance.gradeTosign)
, gradeToExecute(instance.gradeToExecute){
}

AForm& AForm::operator=(const AForm &instance){
	this->isSigned = instance.isSigned;
	return(*this);
}

AForm::~AForm(){}

const std::string AForm::getName() const {
	return this->name;
}

bool AForm::isFormSigned()const {
	return this->isSigned;
}

int AForm::getGradeToSign()const{
	return this->gradeTosign;
}

int AForm::getGradeToExecute()const{
	return this->gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureau){
	if (bureau.getGrade() <= this->gradeTosign)
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}


const char* AForm::GradeTooHighException::what() const throw(){
	return("Grade to high");
}

const char* AForm::GradeTooLowException::what() const throw(){
	return("Grade to Low");
}

const char* AForm::SignedException::what() const throw(){
	return("Form not signed");
}

std::ostream &operator<<(std::ostream &out, const AForm &instance){
	out << instance.getName();
	if (instance.isFormSigned() == true)
		out << " is signed ";
	else
		out << " not signed ";
	out << " grade to sign : " <<instance.getGradeToSign() << " , grade to execute : ";
	out << instance.getGradeToExecute() << " ";
	return out;
}

