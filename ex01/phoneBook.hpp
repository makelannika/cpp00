/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:18 by amakela           #+#    #+#             */
/*   Updated: 2024/07/30 01:05:02 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class   PhoneBook {
    public:
        Contact contacts[8];

    void    getContacts() {
        for (int i = 0; i < 3; i++) {
            std::cout << i << "        |";
            std::cout << contacts[i].getInfo("firstName");
            std::cout << "  |  ";
            std::cout << contacts[i].getInfo("lastName");
            std::cout << "  |  ";
            std::cout << contacts[i].getInfo("nickName") << std::endl;
        }
    }
    void    getContact(int idx) {
        std::cout << contacts[idx].getInfo("firstName") << std::endl;
        std::cout << contacts[idx].getInfo("lastName") << std::endl;
        std::cout << contacts[idx].getInfo("nickName") << std::endl;
        std::cout << contacts[idx].getInfo("darkestSecret") << std::endl;
        std::cout << contacts[idx].getInfo("number") << std::endl;
    }
};

#endif
