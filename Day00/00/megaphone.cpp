/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:34:13 by yinzhang          #+#    #+#             */
/*   Updated: 2019/10/19 16:04:58 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	printitupper(char *s)
{
	int i = 0;

	while(s[i])
	{
		putchar(toupper(s[i]));
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			printitupper(argv[i]);
			i++;
		}
		std::cout << "\n" ;	
	}
}
