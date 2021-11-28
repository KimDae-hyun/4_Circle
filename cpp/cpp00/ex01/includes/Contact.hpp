/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:51:03 by daekim            #+#    #+#             */
/*   Updated: 2021/11/19 17:20:34 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class Contact
{
    private:
        std::string contact[5];
    
    public:
        Contact();
        void    add();
        void    output_phonebook();
        void    output_contact();
};

#endif