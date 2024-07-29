/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:21 by amakela           #+#    #+#             */
/*   Updated: 2024/07/30 01:07:34 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

int main() {

    Contact     contact;
    PhoneBook   phonebook;
    std::string input;
    int         i = 0;
    int         idx = 0;

    while (1) {
        std::cout << "Enter command (ADD/SEARCH/EXIT): ";
        std::cin >> input;
        if (input == "EXIT") {
            std::cout << "Closing phonebook" << std::endl;
            return (0);
        }
        if (input == "ADD") {
            if (i == 8)
                i = 0;
            std::cout << "Enter first name: ";
            std::cin >> input;
            phonebook.contacts[i].setInfo("firstName", input);;
            std::cout << "Enter last name: ";
            std::cin >> input;
            phonebook.contacts[i].setInfo("lastName", input);
            std::cout << "Enter nick name: ";
            std::cin >> input;
            phonebook.contacts[i].setInfo("nickName", input);
            std::cout << "Enter darkest secret: ";
            std::cin >> input;
            phonebook.contacts[i].setInfo("darkestSecret", input);
            std::cout << "Enter number: ";
            std::cin >> input;
            phonebook.contacts[i].setInfo("number", input);
            i++;
        } else if (input == "SEARCH") {
            phonebook.getContacts();
            std::cout << "Enter index: ";
            std::cin >> idx;
            phonebook.getContact(idx);
        }
    }
    return (0);
}
