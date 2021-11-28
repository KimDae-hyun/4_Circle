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

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
    private:
        Contact contact[8];
        void        output_phonebook(int i);
        void        output_contact(int i);

    public:
        void        add(int i);
        void        show_contacts(int cnt, int flag);
};

#endif
