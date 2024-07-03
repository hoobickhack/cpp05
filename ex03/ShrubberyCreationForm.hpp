/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:16:18 by isouaidi          #+#    #+#             */
/*   Updated: 2024/07/03 16:44:23 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>

#include "AForm.hpp"

class Bureaucrat;


class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &instance);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &instance);
		virtual ~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;	
};
