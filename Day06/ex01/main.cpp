/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 20:20:00 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/30 20:20:02 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <string>
#include <ctime>

char genRandom2()
{
    static const char alphanum[] =

    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "0123456789";

    return alphanum[rand() % 59];
}

std::string genRandomWord2(int n)
{
    srand(time(0));
    std::string word;
    for(int i=0; i < n; i++)
    {
        word = word + genRandom2();
    }
    return(word);
}

char genRandom()
{
    static const char alphanum[] =
    "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

    return alphanum[rand() % 59];
}

std::string genRandomWord(int n)
{
    srand(time(0));
    std::string word;
    for(int i=0; i < n; i++)
    {
        word = word + genRandom();
    }
    return(word);
}

char genRandomNum2()
{
    static const char alphanum[] =
    "0123456789";

    return alphanum[rand() % 9];
}

std::string genRandomNum(int n)
{
    srand(time(0));
    std::string word;
    for(int i=0; i < n; i++)
    {
        word = word + genRandomNum2();
    }
    return(word);
}

void * serialize(void)
{
    std::string serial;
    int randomNum;
    int n;

    n = std::rand();
    serial = genRandomWord(8) + "\n" + genRandomNum(n % 8) + "\n" + genRandomWord2(8) + "\n";
    return(new std::string(serial));
} 

Data * deserialize(void *raw)
{
    Data deserial;
    int i = 0;
    std::string x;

    while((*(std::string *)raw)[i] != '\n')
    {
        deserial.s1 = deserial.s1 + (*(std::string *)raw)[i];
        i++;
    }

    i++;
    while((*(std::string *)raw)[i] != '\n')
    {
        x = x + (*(std::string *)raw)[i]; 
        i++;
    }
    char s[x.size() + 1];
    strcpy(s, &x[0]);
    deserial.n = atoi(s);

    i++;
    while((*(std::string *)raw)[i] != '\n')
    {
        deserial.s2 = deserial.s2 + (*(std::string *)raw)[i];
        i++;
    }
    return(new Data(deserial));
}


int main()
{
    std::string *x;
    Data *d;

//serialization of the data
    x = (std::string *)serialize();
    std::cout << *x;
    std::cout << "=================================================" <<std::endl;
//deserialization
    d = (Data *)deserialize((char *)x);
    std::cout << d->s1 << std::endl;
    std::cout << d->n << std::endl;
    std::cout << d->s2 << std::endl;

}
