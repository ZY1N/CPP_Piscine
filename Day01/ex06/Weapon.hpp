/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 22:02:36 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/22 22:02:37 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include "iostream"

class Weapon
{
    public:
        Weapon(std::string set);
        const std::string getType();
        void setType(std::string type);
    private:
        std::string type;
    protected:
};

#endif
