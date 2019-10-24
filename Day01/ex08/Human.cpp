/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:48:21 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/23 17:48:22 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

typedef void(Human::* moves) (std::string const &);

void Human::meleeAttack(std::string const & target)
{
    std::cout << "You have assulted someone using a melee attack, GOOD JOB!" << std::endl;
    std::cout << target << " died" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "You have assulted someone using a ranged attack, COWARD!" << std::endl;
    std::cout << target << " died... whatever a kill is a kill." << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "REEEEEEEEEEEEEEEEEEEEEEEE!" << std::endl;
    std::cout << target << " is terrified." << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    moves   choices[3] = {&Human::meleeAttack, &Human::rangedAttack, 
        &Human::intimidatingShout};
    std::string things[3] = {"melee", "ranged", "shout"};
    int i = 0;

    while(i < 3)
    {
        if(action_name == things[i])
            (this->*choices[i])(target);
        i++;
    }
}
