/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:03:52 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:03:53 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle &obj);
		virtual ~PlasmaRifle();
		PlasmaRifle &operator=(PlasmaRifle const &r);
        void attack() const;
};

#endif
