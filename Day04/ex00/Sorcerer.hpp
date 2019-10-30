/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:57:34 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 14:57:35 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H 
#define SORCERER_H

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer &x);
        ~Sorcerer();
        Sorcerer &operator= (const Sorcerer &x);

        void introduce();
        const std::string getName() const;
        const std::string getTitle() const;
        void setName(std::string x);
        void setTitle(std::string x);
        void polymorph(Victim const &x) const;
    private:
        std::string _name;
        std::string _title;
};

std::ostream & operator<<(std::ostream &x, Sorcerer const &y);
#endif
