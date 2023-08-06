/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 22:35:59 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/22 22:50:13 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
	int i;
	int j;
	char out;

	j = 1;
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}

	while(j < ac)
	{
		i = 0;
		while(av[j][i] != '\0')
		{
			out = toupper(av[j][i]);
			std::cout << out ;
			i++;
		}
		j++;
	}
	std::cout << std::endl;
}