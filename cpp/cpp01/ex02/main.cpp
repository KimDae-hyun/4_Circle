/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:21:25 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:21:26 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "str: " << &str <<std::endl;
	std::cout << "ptr: " << stringPTR <<std::endl;
	std::cout << "ref: " << &stringREF <<std::endl;

	std::cout << "ptr: " << *stringPTR <<std::endl;
	std::cout << "ref: " << stringREF <<std::endl;
	return (0);
}
