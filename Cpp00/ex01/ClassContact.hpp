/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:07:49 by schene            #+#    #+#             */
/*   Updated: 2020/11/07 16:05:03 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <iostream>
# include <iomanip>

class   Contact
{
    private:
        std::string     first_name;
        std::string     last_name;
        std::string     nickname;
        std::string     login;
        std::string     postal_address;
        std::string     email;
        std::string     phone_nb;
        std::string     birthday;
        std::string     fav_meal;
        std::string     underwear_color;
        std::string     secret;

	public:
    	void fill_fields();
		void aff_contact();
		void search_info(int index);
};

#endif