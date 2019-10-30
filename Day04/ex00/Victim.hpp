/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:57:52 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 14:57:56 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim
{
    public:
        Victim(std::string name);
        Victim(const Victim &x);
        virtual ~Victim();
        Victim &operator= (const Victim &x);

        void introduce();
        const std::string getName() const;
        const std::string getTitle() const;
        void setName(std::string x);
        void setTitle(std::string x);
        virtual void getPolymorphed() const;
    protected:
        std::string _name;
        std::string _title;
};

std::ostream & operator<<(std::ostream &x, Victim const &y);
#endif
