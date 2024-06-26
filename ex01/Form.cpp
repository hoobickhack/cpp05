/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 19:40:40 by isouaidi          #+#    #+#             */
/*   Updated: 2024/06/26 19:47:00 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("Def"), isSigned(false), gradeTosign(150), gradeToExecute(150){}

Form::Form(const std::string name, const int tosign, const int exec)
:name(name), isSigned(false), gradeTosign(tosign), gradeToExecute(exec){
	
}

Form::Form(const Form &instance){
}