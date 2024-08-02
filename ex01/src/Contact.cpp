/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:11:05 by amakela           #+#    #+#             */
/*   Updated: 2024/08/02 13:43:42 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

int	Contact::set_name(std::string type, std::string name) 
{
	if (name.empty()) {
		return (1);
	}
	if (type == "firstName")
		firstName = name;
	else if (type == "lastName")
		lastName = name;
	else if (type == "nickName")
		nickName = name;
	else if (type == "darkestSecret")
		darkestSecret = name;
	return (0);
}

int	Contact::set_number(std::string number)
{
	if (!number.empty() && number.find_first_not_of("0123456789") == std::string::npos)
	{
		this->number = number;
		return (0);
	}
	return (1);
}

std::string Contact::get_info(std::string info)
{
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
