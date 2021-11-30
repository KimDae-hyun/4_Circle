/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:47:34 by daekim            #+#    #+#             */
/*   Updated: 2021/11/30 19:47:37 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Put only one argument!" << std::endl;
		return (-1);
	}
	Conversion conversion(argv[1]);
	conversion.check_param();
	return (0);
}

