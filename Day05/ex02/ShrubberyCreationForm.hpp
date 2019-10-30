/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:08:33 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 22:08:34 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
    	ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string x);
		ShrubberyCreationForm(ShrubberyCreationForm &obj);
		virtual ~ShrubberyCreationForm(void);
        void execute(Bureaucrat const &executor) const;
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &x);
}

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm const &x); 

#endif
