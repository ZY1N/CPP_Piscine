/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:15:27 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/31 18:15:29 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <class Y>
void swap(Y &one, Y &two)
{
    Y holder;

    holder = one;
    one = two;
    two = holder; 
    return ;
}

template <class Y>
Y min(Y one, Y two)
{
    if(one > two)
        return(two);
    else if(one < two)
        return(one);
    else
        return(two);
}

template <class Y>
Y max(Y one, Y two)
{
    if(one > two)
        return(one);
    else if(one < two)
        return(two);
    else
        return(two);
}

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
    std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
    std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;
    return 0;
}
