/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:34:37 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/25 14:34:40 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft("WEIRD OLD MAN");

	for (int i = 0; i < 7; i++)
		ft.takeDamage(20);

	for (int i = 0; i < 7; i++)
		ft.beRepaired(20);

	ft.rangedAttack("TOM");
	ft.meleeAttack("JERRY");

	for (int i = 0; i < 10; i++)
		ft.vaulthunter_dot_exe("PIKACHU");

	ScavTrap st("SCAVVY");

	for (int i = 0; i < 7; i++)
		st.takeDamage(20);

	for (int i = 0; i < 7; i++)
		st.beRepaired(20);

	st.rangedAttack("Ben");
	st.meleeAttack("JERRY");

	st.challengeNewcomer("BOY");
}
