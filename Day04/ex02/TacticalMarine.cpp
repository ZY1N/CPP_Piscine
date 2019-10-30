/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:17:42 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 22:17:43 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &x)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    *this = x;
    return ;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}

//coome bakc
TacticalMarine &TacticalMarine::operator=(const TacticalMarine &x)
{
    (void)x;
    return(*this);
}

void TacticalMarine::battleCry() const 
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;

}

void TacticalMarine::meleeAttack() const
{
    std::cout<< "* attacks with chainsword *" << std::endl;
}

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine	*ret = new TacticalMarine(*this);
	return (ret);
}
