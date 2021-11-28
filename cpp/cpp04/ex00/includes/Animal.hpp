/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:38:38 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 18:38:58 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal 
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal & src);
        virtual ~Animal();
     	
        Animal & operator=(const Animal &src);

        virtual void makeSound() const {};
        std::string getType() const;
};

#endif
