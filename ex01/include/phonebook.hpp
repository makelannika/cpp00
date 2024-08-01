/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:18 by amakela           #+#    #+#             */
/*   Updated: 2024/08/01 19:08:17 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>
#include <string>

class   PhoneBook {
    private:
		std::string	truncInfo(std::string info) {
			if (info.length() > 10)
				return (info.substr(0, 9) + ".|");
			else
				return (info + "|");
		}
		
	public:
        Contact contacts[8];

		void    getContacts(int count) {
			std::string	info;
			
			for (int i = 0; i < count; i++) {
				std::cout << std::setw(11) << i + 1 << "|";
				info = contacts[i].getInfo("firstName");
				info = truncInfo(info);
				std::cout << std::setw(11) << info;
				info = contacts[i].getInfo("lastName");
				info = truncInfo(info);
				std::cout << std::setw(11) << info ;
				info = contacts[i].getInfo("nickName");
				info = truncInfo(info);
				std::cout << std::setw(11) << info << std::endl;
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
