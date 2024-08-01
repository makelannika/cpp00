/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:21 by amakela           #+#    #+#             */
/*   Updated: 2024/08/01 21:59:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include "../include/phonebook.hpp"

void	add(PhoneBook &phonebook, int &i) {
	
	std::string input;
	int			idx = i % 7;
	std::cout << "Enter first name: ";
	std::getline (std::cin,input);
	phonebook.contacts[idx].setInfo("firstName", input);;
	std::cout << "Enter last name: ";
	std::getline (std::cin,input);
	phonebook.contacts[idx].setInfo("lastName", input);
	std::cout << "Enter nickname: ";
	std::getline (std::cin,input);
	phonebook.contacts[idx].setInfo("nickName", input);
	std::cout << "Enter darkest secret: ";
	std::getline (std::cin,input);
	phonebook.contacts[idx].setInfo("darkestSecret", input);
	while (true) {
		std::cout << "Enter number: ";
		std::getline (std::cin,input);
		if (!input.empty() && input.find_first_not_of("0123456789") == std::string::npos) {
			phonebook.contacts[idx].setInfo("number", input);
			break ;
		}
	}
	std::cout << std::endl;
	i++;
}

void	search(PhoneBook phonebook, int &i) {

	std::string	input;
	int			contacts = i % 7;
	int			idx;
	
	phonebook.getContacts(contacts);
	while (true) {
		std::cout << "Enter the index of the contact you want to view: ";
		std::getline (std::cin,input);
		if (!input.empty() && input.find_first_not_of("12345678") == std::string::npos) {
			idx = stoi(input);
			if (idx >= 1 && idx <= contacts) {
				phonebook.getContact(idx - 1);
				std::cout << std::endl;
				return ;
			}
		}
	}
}

void	menu() {
	
	std::cout << std::endl;
	std::cout << "ADD - add a contact" << std::endl;
	std::cout << "SEARCH - search for contacts" << std::endl;
	std::cout << "EXIT - close phone book" << std::endl;
	std::cout << std::endl;
}

int main() {

    PhoneBook   phonebook;
    std::string input;
    int         i = 0;
	
	std::cout << "PHONE BOOK IS OPEN" << std::endl;
	menu();
    while (true) {
		std::cout << "Enter an option: ";
		std::getline (std::cin,input);
        if (input == "ADD") {
            add(phonebook, i);
        } else if (input == "SEARCH") {
            search(phonebook, i);
        } else if (input == "EXIT") {
            std::cout << "PHONE BOOK IS CLOSED" << std::endl;
            return (0);
        }
    }
    return (0);
}
