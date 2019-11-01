/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 19:17:48 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/31 19:17:50 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
	public:
		//constructors
		Array(void) : 
            _ary(NULL), _n(0) 
        {
            return ;
        }

		Array(unsigned int n)
        {
			this->_ary = new T[n];
			this->_n = n;
            return ;   
        }

		Array(Array const &obj)
		{
			this->_ary = NULL;
			this->_n = 0;
			*this = obj;
            return ;
		}
		//overload
		Array const &operator=(Array const &x)
		{
			unsigned int i = 0;
			//protection if not empty
			if (this->size() != x.size())
			{
				if (this->_ary != NULL && this->size() != 0)
					delete [] this->_ary;
				this->_ary = new T[x.size()];
			}

			this->_n = x.size();
			while(i < x.size())
			{
				this->_ary[i] = x._ary[i];
				i++;
			}
			return *this;
		}
		//deconstructor
		~Array(void)
		{
			if (this->_ary != NULL)
				delete [] this->_ary;
		}

		T &operator[](unsigned int i) const
		{
			if (this->_ary == NULL || i < 0 || i >= this->_n)
				throw std::exception();
			return this->_ary[i];
		}

		unsigned int size(void) const
		{
			return this->_n;
		}

	private:
		T *_ary;
		unsigned int _n;
};
#endif