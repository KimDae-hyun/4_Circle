/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:25:12 by daekim            #+#    #+#             */
/*   Updated: 2021/12/07 18:25:23 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>

template <typename T>
typename T::iterator easyfind(T &container, int val)
{
	typename T::iterator tmp;

	tmp = container.begin();
	while (tmp != container.end())
	{
		if (*tmp==val)
			return tmp;
		++tmp;
	}
	throw std::invalid_argument("not found value");
}

#endif
