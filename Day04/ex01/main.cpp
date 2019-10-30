/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 17:05:03 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 17:05:04 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{
Character* zaz = new Character("zaz");
std::cout << *zaz;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
zaz->equip(pr);
std::cout << *zaz;
zaz->equip(pf);
zaz->attack(b);
std::cout << *zaz;
zaz->equip(pr);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
zaz->attack(b);
std::cout << *zaz;
return 0;
}
