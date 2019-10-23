/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:39:03 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 17:39:06 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
std::string* panthere = new std::string("String panthere");
std::cout << *panthere << std::endl;
delete panthere;
}

int     main()
{
    memoryLeak();
}
