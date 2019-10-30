/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssultTerminator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 22:17:57 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 22:17:59 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssultTerminator.hpp"

AssultTerminator::AssultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
    return ;
}

AssultTerminator::AssultTerminator(const AssultTerminator &x)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = x;
    return ;
}

AssultTerminator::~AssultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
    return ;
}

//coome bakc
AssultTerminator &AssultTerminator::operator=(const AssultTerminator &x)
{
    (void)x;
    return(*this);
}

void AssultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void AssultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;

}

void AssultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine	*AssultTerminator::clone() const
{
	ISpaceMarine	*ret = new AssultTerminator(*this);
	return (ret);
}
