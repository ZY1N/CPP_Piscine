/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:48:28 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/23 17:48:29 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int     main()
{
    Human mainCharacter;
    std::string target;

    target = "Some innocent goblin";
	mainCharacter.action("shout", target);
	mainCharacter.action("ranged", target);
    mainCharacter.action("melee", target);
}
