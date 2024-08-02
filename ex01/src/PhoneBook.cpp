/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:21 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 13:33:27 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

std::string	PhoneBook::truncInfo(std::string info)
{
	if (info.length() > 10)
		return (info.substr(0, 9) + ".|");
	else
		return (info + "|");
}

void    PhoneBook::get_contacts(int count)
{
	std::string	info;
	
	for (int i = 0; i < count; i++) {
		std::cout << std::setw(11) << i + 1 << "|";
		info = contacts[i].get_info("firstName");
		info = truncInfo(info);
		std::cout << std::setw(11) << info;
		info = contacts[i].get_info("lastName");
		info = truncInfo(info);
		std::cout << std::setw(11) << info ;
		info = contacts[i].get_info("nickName");
		info = truncInfo(info);
		std::cout << std::setw(11) << info << std::endl;
	}
}

void    PhoneBook::get_contact(int idx)
{
	std::cout << contacts[idx].get_info("firstName") << std::endl;
	std::cout << contacts[idx].get_info("lastName") << std::endl;
	std::cout << contacts[idx].get_info("nickName") << std::endl;
	std::cout << contacts[idx].get_info("darkestSecret") << std::endl;
	std::cout << contacts[idx].get_info("number") << std::endl;
}
