/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:39:46 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/31 18:39:48 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename Y>
void printelem(Y n)
{
    std::cout << n << std::endl;
    return ;
}

template <typename Y, typename Y2>
void iter(Y *array, Y2 len, void fpointer(Y n))
{
    if(!array)
        return ;
    for(Y2 i = 0; i < len; i++)
    {
        fpointer(array[i]);
    }
    return ;
}

template <typename Y>
void iter(Y *array, Y len, void fpointer(Y n))
{
    if(!array)
        return ;
    for(Y i = 0; i < len; i++)
    {
        fpointer(array[i]);
    }
    return ;
}

int main()
{
    int ary[] = {1, 2, 3, 4};
    long ary2[] = {1, 2, 3, 4};
    char ary3[] = {'a','a','b','d','f','d'};
    std::string ary4[] = {"happy", "halloween", "merry", "christmas"};

    std::cout << "=============================================================================" << std::endl;
    iter(ary, sizeof(ary)/sizeof(*ary),printelem);
    std::cout << "=============================================================================" << std::endl;
    iter(ary2, sizeof(ary2)/sizeof(*ary2),printelem);   
    std::cout << "=============================================================================" << std::endl;
    iter(ary3, sizeof(ary3)/sizeof(*ary3),printelem);   
    std::cout << "=============================================================================" << std::endl;
    iter(ary4, sizeof(ary4)/sizeof(*ary4),printelem);  
}