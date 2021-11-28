/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:36:02 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:36:05 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog(const Dog & src);
        virtual ~Dog();

        Dog & operator=(const Dog &src);

        virtual void makeSound() const;
        void addIdea(std::string idea, int i);
        void showIdeas() const;
        std::string outputIdeas(int i) const;
};

#endif
