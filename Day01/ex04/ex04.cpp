/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 20:21:28 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 20:21:29 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int     main()
{
    std::string str = "I WANT TO GO HOME!!!";
    std::string *strptr = &str;
    std::string &ref = str;

    std::cout << str << std::endl;
    std::cout << *strptr << std::endl;
    std::cout << ref << std::endl;
}