/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:41:37 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 18:41:55 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"
# include "../includes/WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << std::endl;

    const WrongAnimal* alpha = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    alpha->makeSound();

    delete k;
    delete alpha;

    return (0);
}
