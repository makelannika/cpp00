/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:21 by amakela           #+#    #+#             */
/*   Updated: 2024/07/30 21:09:13 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/phoneBook.hpp"

void	add(PhoneBook &phonebook, int &i) {
	
	std::string input;
	if (i == 8)
		i = 0;
	std::cout << "Enter first name: ";
	std::cin >> input;
	phonebook.contacts[i].setInfo("firstName", input);;
	std::cout << "Enter last name: ";
	std::cin >> input;
	phonebook.contacts[i].setInfo("lastName", input);
	std::cout << "Enter nickname: ";
	std::cin >> input;
	phonebook.contacts[i].setInfo("nickName", input);
	std::cout << "Enter darkest secret: ";
	std::cin >> input;
	phonebook.contacts[i].setInfo("darkestSecret", input);
	std::cout << "Enter number: ";
	std::cin >> input;
	phonebook.contacts[i].setInfo("number", input);
	i++;
}

void	search(PhoneBook phonebook) {

	int         idx = 0;
	
	phonebook.getContacts();
	std::cout << "Enter index (0 - 7): ";
	std::cin >> idx;
	phonebook.getContact(idx);
}

int main() {

    PhoneBook   phonebook;
    std::string input;
    int         i = 0;
	
    while (1) {
        std::cout << "Enter command (ADD/SEARCH/EXIT): ";
        std::cin >> input;
        if (input == "ADD") {
            add(phonebook, i);
        } else if (input == "SEARCH") {
            search(phonebook);
        } else if (input == "EXIT") {
            std::cout << "Closing phonebook" << std::endl;
            return (0);
        }
    }
    return (0);
}
