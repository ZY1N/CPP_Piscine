/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 16:49:32 by yinzhang          #+#    #+#             */
/*   Updated: 2019/11/01 16:49:34 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <exception>
#include <iostream>

class Span
{
    public:
        //constructor
        Span();
        Span(unsigned int n);
        Span(const Span &obj);
        //deconstructor
        ~Span();
        //equal
        Span &operator=(const Span &obj);

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();

    protected:
        unsigned int _n;
        std::vector<int> _v;
};

#endif
