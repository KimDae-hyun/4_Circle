/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:22:44 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:22:45 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int     main(void)
{
    Karen   karen;

    karen.complain("ERROR");
    karen.complain("DEBUG");
    karen.complain("");
    karen.complain("WARNING");
    karen.complain("INFO");
}
