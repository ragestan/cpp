/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentalh <zbentalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 05:37:10 by zbentalh          #+#    #+#             */
/*   Updated: 2023/07/22 22:06:10 by zbentalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define	PHONEBOOK_CLASS_H
#include <string>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <set>

class Contact {
  public:
	void	add_first_name();
	void	contact_list();
	void	one_contact();
  private:
    std::string first_name; 
    std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	
};

class PhoneBook {
	public:
	void add_contact();
	void search_print();
	private:
		int i;
		Contact c[8];
};

#endif