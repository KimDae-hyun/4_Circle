/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Function.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:00:03 by daekim            #+#    #+#             */
/*   Updated: 2021/12/05 20:00:10 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_HPP
# define FUNCTION_HPP

#include <iostream>

template <typename function>
void swap(function &a, function &b)
{
	function temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename function>
function min(function a, function b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template <typename function>
function max(function a, function b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (b);
	else
		return (a);
}

#endif
