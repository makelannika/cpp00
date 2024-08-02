/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:18 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 17:20:30 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "../include/Contact.hpp"

class   PhoneBook {
    private:
		
        Contact contacts[8];
		std::string	trunc_info(std::string info);
		
	public:
		void    get_contacts(int count);
		void    get_contact(int idx);
		int		add_contact_info(std::string type, std::string info, int idx);
};

#endif
