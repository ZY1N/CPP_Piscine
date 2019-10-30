/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:16:20 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/29 21:16:20 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
    //someone that works
    Form f = Form("Christmas presents application", 1, 1);
    Bureaucrat ME = Bureaucrat("GOD", 1);

    try
    {
        ME.signForm(f);
        std::cout << ME;
        std::cout << f << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    //someone that doesnt
    Form f2 = Form("Toilet paper application", 1, 1);
    Bureaucrat ME2 = Bureaucrat("GOD", 2);

    try
    {
        ME2.signForm(f2);
        std::cout << ME2;
        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    } 

}
