/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:50:59 by daekim            #+#    #+#             */
/*   Updated: 2021/11/19 17:07:44 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void    Phonebook::add(int i)
{
    contact[i].add();
}

void    Phonebook::output_phonebook(int i)
{
    contact[i].output_phonebook();
}

void    Phonebook::output_contact(int i)
{
    contact[i].output_contact();
}

void    Phonebook::show_contacts(int cnt, int flag)
{
    int     i;
	int		len;
	const char	*tmp;
    std::string answer;

    if (flag == 1)
        cnt = 7;
    i = -1;
    while (++i <= cnt)
    {
        std::cout << std::setw(10) << i << '|';
        output_phonebook(i);
    }
    std::cout << "What are you looking for? : ";
    std::getline(std::cin, answer);
	tmp = answer.c_str();
	len = strlen(tmp);
	for (int j = 0; j < len; j++)
	{
		if (tmp[j] < '0' || tmp[j] > '9')
			break ;
		if (j == len - 1)
			i = atoi(tmp);
	}
	if (0 <= i && i <= cnt)
        output_contact(i);
    else
        std::cout << "You've entered a wrong number!" << std::endl;
}

int main(void)
{
    Phonebook phonebook;
    std::string str;
    int     i;
    int     flag;

    i = -1;
    flag = 0;
    while (42)
    {
        std::cout << "Enter a command(ADD or SEARCH or EXIT) : ";
        std::getline(std::cin, str);
        if (str.compare("ADD") == 0)
        {
            i++;
            phonebook.add(i);
            if (i == 7)
            {
                flag = 1;
                i = -1;
            }
        }
        else if (str.compare("SEARCH") == 0)
        {
            phonebook.show_contacts(i, flag);
        }
        else if (str.compare("EXIT") == 0)
        {
            break ;
        }
        else
        {
            std::cout << "WRONG!" << std::endl;
        }
    }
    return (0);
}