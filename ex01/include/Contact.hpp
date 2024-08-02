/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:04 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 13:43:01 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string darkestSecret;
        std::string number;

    public:
        int			set_name(std::string type, std::string name);
		int			set_number(std::string number);
        std::string get_info(std::string info);
};

#endif
