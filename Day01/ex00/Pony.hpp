/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:56:03 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 14:56:06 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
#define PONY_H

#include <string>

class Pony
{
    public:
        void            saybye();
        void            setname(std::string s);
        std::string     getname();
        void            setcolor(std::string s);
        std::string     getcolor();
        void            setgender(std::string s);
        std::string     getgender();
        void            setjumpheight(int i);
        int             getjumpheight();
        void            setalivestatus(bool b);
        bool            getalivestatus();
    private:
        std::string     name;
        std::string     color;
        std::string     gender;
        int             jumpheight;
        bool            alivestatus;
    protected:
};

#endif