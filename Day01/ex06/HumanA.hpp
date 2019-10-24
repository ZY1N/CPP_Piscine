/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:03:41 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 22:03:42 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& x);
        std::string name;
        void attack();
    private:
        Weapon &humanAWeapon;
    protected:
};

#endif
