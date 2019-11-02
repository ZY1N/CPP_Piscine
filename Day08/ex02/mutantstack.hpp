/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 19:25:46 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/01 19:25:48 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <utility>

template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        //ITERATOR
        typedef typename std::stack<T>::container_type::iterator iterator;

        //CONSTRUCTOR
        MutantStack()
        {
            return ;
        }
        
        MutantStack(MutantStack const & other)
        { 
            *this = other; 
            return ;
        }

        //DECONSTRUCTOR
        ~MutantStack()
        {
            return ;
        }

        //OVERLOAD
        MutantStack const & operator = (MutantStack const & rhs) 
        { 
            std::stack<T>::operator = (rhs); 
            return (*this); 
        }

        //returns the begining and end
        iterator begin()
        {
            return std::begin(std::stack<T>::c); 
        }

        iterator end()
        { 
            return std::end(std::stack<T>::c);
        }
};

#endif 
