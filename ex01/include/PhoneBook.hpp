/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:18 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 13:35:04 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class   PhoneBook {
    private:
		std::string	truncInfo(std::string info);
		
	public:
        Contact contacts[8];

		void    get_contacts(int count);
		void    get_contact(int idx);
};

#endif
