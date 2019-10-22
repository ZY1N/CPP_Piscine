/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:53:17 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/19 17:53:18 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
#include <cstring>
#include <string.h>

class contact
{
    public:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string login;
        std::string postal;
        std::string address;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthdayDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;
};

void    addFunction(contact *oneContact)
{
    std::cout << "Enter first name:" << std::endl;
    std::getline(std::cin, oneContact->firstName);
    std::cout << "Enter last name:" << std::endl;
    std::getline(std::cin, oneContact->lastName);
    std::cout << "Enter nickname:" << std::endl;
    std::getline(std::cin, oneContact->nickName);
    std::cout << "Enter login:" << std::endl;
    std::getline(std::cin, oneContact->login);
    std::cout << "Enter postal address:" << std::endl;
    std::getline(std::cin, oneContact->postal);
    std::cout << "Enter email address:" << std::endl;
    std::getline(std::cin, oneContact->emailAddress);
    std::cout << "Enter phone number:" << std::endl;
    std::getline(std::cin, oneContact->phoneNumber);
    std::cout << "Enter birthday date:" << std::endl;
    std::getline(std::cin, oneContact->birthdayDate);
    std::cout << "Enter favorite meal:" << std::endl;
    std::getline(std::cin, oneContact->favoriteMeal);
    std::cout << "Enter underwear color:" << std::endl;
    std::getline(std::cin, oneContact->underwearColor);
    std::cout << "Enter darkest secret:" << std::endl;
    std::getline(std::cin, oneContact->darkestSecret);
}

std::string    findSummary(std::string s)
{
    int len;

    len = s.length();
    if(len <= 10)
        return(s);
    else
        return(s.substr(0, 9) + ".");
}

void    searchIndex(contact eightContacts[8], int i)
{
    int     index;

    std::cout << "Enter index of desired entry for more information:" << std::endl;
    std::cin >> index;
    if (std::cin.good() && (index >= 0 && index < i))
    {
        std::cout << eightContacts[index].firstName << std::endl;
        std::cout << eightContacts[index].lastName << std::endl;
        std::cout << eightContacts[index].nickName << std::endl;
        std::cout << eightContacts[index].login << std::endl;
        std::cout << eightContacts[index].postal << std::endl;
        std::cout << eightContacts[index].emailAddress << std::endl;
        std::cout << eightContacts[index].phoneNumber << std::endl;
        std::cout << eightContacts[index].birthdayDate << std::endl;
        std::cout << eightContacts[index].favoriteMeal << std::endl;
        std::cout << eightContacts[index].underwearColor << std::endl;
        std::cout << eightContacts[index].darkestSecret << std::endl;
    }
    else
    {
        std::cout << "non-valid index" << std::endl;
    }
    std::cin.clear();
}

void    searchFunction(contact eightContacts[8], int i)
{
    int x;
    std::string fname;
    std::string lname;
    std::string nname;

    x = 0;
    std::cout << "|     index|" << "first name|" << " last name|" 
        << "  nickname|" << std::endl;
    while(x < i)
    {
        fname = findSummary(eightContacts[x].firstName);
        lname = findSummary(eightContacts[x].lastName);
        nname = findSummary(eightContacts[x].nickName);
        std::cout << "|" << std::setw(10) << x;
        std::cout << "|" << std::setw(10) << fname;
        std::cout << "|" << std::setw(10) << lname;
        std::cout << "|" << std::setw(10) << nname << "|"<< std::endl;
        x++;
    }
    searchIndex(eightContacts, i);
}

int     main(int argc, char **argv)
{
    int i;
    std::string command;

    i = 0;
    contact eightContacts[8];
    while(1)
    {
        std::cout << "Please enter a command:" << std::endl;
        std::getline(std::cin, command);
        if(command == "EXIT")
            return 0;
        if(command == "ADD" && i < 8)
        {
            addFunction(&eightContacts[i]);
            i++;
        }
        else if (command == "ADD" && i == 8)
            std::cout << "Max capacity reached(8)" << std::endl;
        if(command == "SEARCH")
            searchFunction(eightContacts, i);
    }
}
