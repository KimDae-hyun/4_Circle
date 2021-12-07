/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:26:37 by daekim            #+#    #+#             */
/*   Updated: 2021/12/07 18:27:53 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    Span sp = Span(5);

    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Span large_sp = Span(10000);
    
    try
    {
        std::vector<int> v;
        int x = 0;
        for (int i = 0; i < 10000; i++)
        {
            x += i;
            v.push_back(x);
        }
        large_sp.addNumber(v.begin(), v.end());
        std::cout << large_sp.shortestSpan() << std::endl;
        std::cout << large_sp.longestSpan() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
