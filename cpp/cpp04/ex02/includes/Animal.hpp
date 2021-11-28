/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:35:49 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:35:52 by daekim           ###   ########.fr       */
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

        std::string getType() const;
        virtual void makeSound() const = 0;
        virtual void addIdea(std::string idea, int i) = 0;
        virtual void showIdeas() const = 0;
};

#endif
