/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 02:57:45 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/25 09:22:43 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void Contact::add_first_name()
{
	std::cout << "YOU ARE ADDING A NEW CONTACT !" << std::endl;
	std::cout << "ENTER HES FIRST NAME :" << std::endl;
	 std::getline (std::cin,first_name);
	if (std::cin.eof())
		exit(0);
	std::cout << "HES LAST NAME :" << std::endl;
	 std::getline (std::cin,last_name);
	if (std::cin.eof())
		exit(0);
	std::cout << "HES NICKNAME :" << std::endl;
	 std::getline (std::cin,nickname);
	if (std::cin.eof())
		exit(0);
	std::cout << "HES PHONE NUMBER :" << std::endl;
	 std::getline (std::cin,phone_number);
	if (std::cin.eof())
		exit(0);
	std::cout << "HES DARKEST SECRET :" << std::endl;
	 std::getline (std::cin,darkest_secret);
	if (std::cin.eof())
		exit(0);
	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "you have to fill all the fields" << std::endl;
		add_first_name();
	}
	else
		std::cout << "the contact has been added successfully" << std::endl;
}

void Contact::one_contact()
{
	std::cout << "first name :" << first_name << std::endl;
	std::cout << "last name :" << last_name << std::endl;
	std::cout << "nickname :" << nickname << std::endl;
}

void Contact::contact_list()
{
	if (first_name.size() > 10)
	{
		first_name.resize(9);
		std::cout << first_name << ".|";
	}
	else
	{
		first_name.resize(10,' ');
		std::cout << first_name << "|";
	}
	if (last_name.size() > 10)
	{
		last_name.resize(9);
		std::cout << last_name << ".|";
	}
	else
	{
		last_name.resize(10,' ');
		std::cout << last_name << "|";
	}
	if (nickname.size() > 10)
	{
		nickname.resize(9);
		std::cout << nickname << ".|";
	}
	else
	{
		nickname.resize(10,' ');
		std::cout << nickname << "|";
	}
	std::cout << std::endl;

}

void PhoneBook::search_print()
{
	std::string str;
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "index     |first name|last name |nickname  |" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << "         |";
		c[i].contact_list();
	}
	std::cout << "-------------------------------------------" << std::endl;
	std::getline (std::cin,str);
	if (std::cin.eof())
		exit(0);
	if (isdigit(str[0]))
	{
		i = atoi(str.c_str());
		if (i > 7 || i < 0)
		{
			std::cout << "wrong index" << std::endl;
			return ;
		}
		c[i].one_contact();
	}
	else
		std::cout << "wrong index" << std::endl;
}

void PhoneBook::add_contact()
{
	static int i;
	c[i].add_first_name();
	i++;
	if (i == 8)
		i = 0;
}

int	main(void)
{
	std::string str;
	PhoneBook book;

	while (1)
	{
		while (1)
		{
			std::cout << " Welcome to your awesome phone how can i help you ?" << std::endl;
			 std::getline (std::cin,str);
			if (std::cin.eof())
				exit(0);
			else if (str.compare("ADD") == 0)
				book.add_contact();
			else if (str.compare("SEARCH") == 0)
				book.search_print();
			else if (str.compare("EXIT") == 0)
			{
				std::cout << "EXTING !" << std::endl;
				exit(0);
			}
		}
	}
}