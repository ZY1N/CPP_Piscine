/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:52:20 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/01 15:52:21 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <iterator>
#include <vector>
#include <exception>

int main()
{
    std::vector<int> test;

    for(int i = 0; i < 10; i++)
    {
        test.push_back(i);
    }

    std::cout << "Vector int: "; 
    for (std::vector<int>::iterator i = test.begin(); i != test.end(); ++i) 
        std::cout << *i << " ";

    try
    {
        std::cout << std::endl << easyfind(test, 5) << std::endl;
        std::cout << easyfind(test, 11) << std::endl;
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl;;
    }
}
