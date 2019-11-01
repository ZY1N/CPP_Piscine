/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:09:43 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/30 14:09:45 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "scalar.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
    try
    {
        Scalar test(argv[1]);
        std::cout << test;
    }
    catch(std::exception &e)
    {
        std::cout << "try something else" << std::endl;
    }

    }
    else if(argc > 2)
    {
        std::cout << "Only 1 arg at a time plez" << std::endl;
    }
    else
    {
        std::cout << "Please enter an argument when calling convert" << std::endl;
    }
}
