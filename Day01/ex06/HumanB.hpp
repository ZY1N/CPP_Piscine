/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:03:47 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 22:03:49 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
       HumanB(std::string name);
       void attack();
       void setWeapon(Weapon &x);
    private:
        std::string name;
        Weapon *humanBWeapon;
    protected:
};

#endif
