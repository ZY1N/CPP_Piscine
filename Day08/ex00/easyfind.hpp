/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:52:15 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/01 15:52:16 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iterator>
#include <exception>

//or use the: with n being the value to look for
//it returns location of the first element or the end of it 
//          std::find (vec.begin(), vec.end(), n)

template <typename T>
int easyfind(T thing1, int thing2)
{
    typename T::iterator ptr;

    ptr = thing1.begin();
    while(ptr != thing1.end())
    {
        if(*ptr == thing2)
        {
            return(*ptr);
        }
        ptr++;
    }
    throw std::exception();
};

#endif
