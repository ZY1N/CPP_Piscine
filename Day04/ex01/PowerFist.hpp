/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:04:04 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:04:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
		PowerFist();
		PowerFist(PowerFist &obj);
		virtual ~PowerFist();
		PowerFist &operator=(PowerFist const &r);
        void attack() const;
};

#endif
