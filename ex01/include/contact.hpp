/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:04 by amakela           #+#    #+#             */
/*   Updated: 2024/07/29 23:57:24 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        void    setInfo(std::string info, std::string str) {
            if (info == "firstName")
                firstName = str;
            else if (info == "lastName")
                lastName = str;
            else if (info == "nickName")
                nickName = str;
            else if (info == "darkestSecret")
                darkestSecret = str;
            else if (info == "number")
                number = str;
        }
        std::string getInfo(std::string info) {
            if (info == "firstName")
                return (firstName);
            else if (info == "lastName")
                return (lastName);
            else if (info == "nickName")
                return (nickName);
            else if (info == "darkestSecret")
                return (darkestSecret);
            else if (info == "number")
                return (number);
            return (NULL);
        }
};

#endif
