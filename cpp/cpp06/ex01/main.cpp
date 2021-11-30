/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:48:44 by daekim            #+#    #+#             */
/*   Updated: 2021/11/30 19:49:01 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t i;

	i = reinterpret_cast<uintptr_t> (ptr);
	return (i);
}

Data* deserialize(uintptr_t raw)
{
	Data *dt;

	dt = reinterpret_cast<Data *> (raw);
	return (dt);
}

int	main()
{
	Serialize dt;
	uintptr_t i;
	Data *ptr;

	dt.dt_show();
	i = serialize(dt.getValue());

	std::cout << i << std::endl;

	ptr = deserialize(i);

	std::cout << ptr << std::endl;
	return (0);
}
