/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:48:24 by daekim            #+#    #+#             */
/*   Updated: 2021/11/30 19:48:43 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	short id;
	int age;
	double wage;
	std::string name;
	char *test;
};

class Serialize
{
	private:
		Data dt;

	public:
		Serialize();
		Serialize(const Serialize &src);
        Serialize& operator= (const Serialize &src);
        ~Serialize();

		void dt_show();
		Data *getValue();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
