/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:58:14 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/26 14:58:15 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H

#include <iostream>
#include "Victim.hpp"

class   Peon : public Victim
{
    public:
        Peon(void);
		Peon(std::string name);
		Peon(Peon &obj);
		virtual ~Peon(void);
		Peon &operator=(Peon const &r);

		void	getPolymorphed(void) const;

		std::string		getName(void) const;

};

std::ostream	&operator<<(std::ostream &x, Peon const &y); 
 
#endif
