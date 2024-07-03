/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:27:33 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 16:44:16 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm{
	private:
		std::string target;

	public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &instance);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &instance);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;

};