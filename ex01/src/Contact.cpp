/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:11:05 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 16:13:55 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

int	Contact::set_info(std::string type, std::string info) 
{
	if (info.empty() || info.find_first_not_of(" \t\n\v\f\r") == std::string::npos) {
		return (1);
	}
	if (type == "first name")
		firstName = info;
	else if (type == "last name")
		lastName = info;
	else if (type == "nickname")
		nickname = info;
	else if (type == "darkest secret")
		darkestSecret = info;
	else if (type == "number") {
		if (info.find_first_not_of("0123456789") == std::string::npos)
			number = info;
		else
			return (1);
	}
	return (0);
}

std::string Contact::get_info(std::string type)
{
	if (type == "first name")
		return (firstName);
	else if (type == "last name")
		return (lastName);
	else if (type == "nickname")
		return (nickname);
	else if (type == "darkest secret")
		return (darkestSecret);
	else if (type == "number")
		return (number);
	return (NULL);
}
