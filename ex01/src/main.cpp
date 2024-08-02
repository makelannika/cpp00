/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:11:03 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 15:26:31 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "../include/PhoneBook.hpp"

void	add_info(PhoneBook &phonebook, std::string type, int idx)
{
	std::string input;
	
	while (true) {
		std::cout << "Enter " << type << ": ";
		std::getline(std::cin, input);
		if (type == "first name") {
			if (!phonebook.add_contact_info(type, input, idx))
				return ;
		} else if (type == "last name") {
			if (!phonebook.add_contact_info(type, input, idx))
				return ;
		} else if (type == "nickname") {
			if (!phonebook.add_contact_info(type, input, idx))
				return ;
		} else if (type == "darkest secret") {
			if (!phonebook.add_contact_info(type, input, idx))
				return ;
		} else if (type == "number") {
			if (!phonebook.add_contact_info(type, input, idx))
				return ;
		}
	}
}

void	add(PhoneBook &phonebook, int &i)
{	
	std::string input;
	int			idx;
	
	idx = i % 8;
	add_info(phonebook, "first name", idx);
	add_info(phonebook, "last name", idx);
	add_info(phonebook, "nickname", idx);
	add_info(phonebook, "darkest secret", idx);
	add_info(phonebook, "number", idx);
	std::cout << std::endl;
	i++;
}

void	search(PhoneBook phonebook, int &i)
{
	std::string	input;
	int			contacts;
	int			idx;
	
	if (i > 8)
		contacts = 8;
	else
		contacts = i;
	if (!contacts) {
		std::cout << "Phone book is empty" << std::endl;
		std::cout << std::endl;
		return ;
	}
	phonebook.get_contacts(contacts);
	while (true) {
		std::cout << "Enter the index of the contact you want to view: ";
		std::getline(std::cin,input);
		if (!input.empty() && input.find_first_not_of("12345678") == std::string::npos) {
			idx = stoi(input);
			if (idx >= 1 && idx <= contacts) {
				phonebook.get_contact(idx - 1);
				std::cout << std::endl;
				return ;
			}
		}
	}
}

void	menu(void)
{
	std::cout << "PHONE BOOK IS OPEN" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD - add a contact" << std::endl;
	std::cout << "SEARCH - search for contacts" << std::endl;
	std::cout << "EXIT - close phone book" << std::endl;
	std::cout << std::endl;
}

int main()
{
    PhoneBook   phonebook;
    std::string input;
    int         i = 0;

	menu();
    while (true) {
		std::cout << "Enter an option: ";
		std::getline(std::cin,input);
        if (input == "ADD")
            add(phonebook, i);
        else if (input == "SEARCH")
            search(phonebook, i);
        else if (input == "EXIT") {
            std::cout << "PHONE BOOK IS CLOSED" << std::endl;
            return (0);
        }
    }
    return (0);
}
