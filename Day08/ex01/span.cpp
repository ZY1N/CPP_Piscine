/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:49:27 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/01 16:49:27 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
    return ;
}

Span::Span(unsigned int n)
{
    this->_v.reserve(n);
    this->_n = n;
    return ;
}

Span::Span(const Span &obj)
{
    *this = obj;
    return ;   
}
//deconstructor
Span::~Span()
{
    return ;
}
//equal
Span &Span::operator=(const Span &obj)
{
    this->_v = obj._v;
    this->_n = obj._n;
    return(*this);
}

void Span::addNumber(int n)
{
    if(this->_v.size() < this->_n)
        this->_v.push_back(n);
    else
        throw std::length_error("It is full...\n");
}

//first we need to sort from smallest to biggest 3rd param is order
//default is smallest to biggest
int Span::shortestSpan()
{
    std::vector<int> sorted;
    std::vector<int>::iterator ptr;
    int span;
    unsigned long i;

    if(this->_v.size() <= 1)
        throw std::out_of_range("Can't find shortest span with less than 1...");
    i = 0;
    span = INT_MAX;
    sorted = this->_v;
    sort(sorted.begin(), sorted.end());
    ptr = sorted.begin();

    while(i < sorted.size() - 1)
    {
        if(span > (ptr[i + 1] - ptr[i]))
            span = ptr[i + 1] - ptr[i];
        i++;
    }
    return(span);
}

int Span::longestSpan()
{
    int s;
    int biggest;
    int smallest;

    if(this->_v.size() <= 1)
        throw std::out_of_range("Can't find max span with less than 1...");
    biggest = *max_element(this->_v.begin(), this->_v.end());
    smallest = *min_element(this->_v.begin(), this->_v.end());

    s = biggest - smallest;
    return(s);
}
