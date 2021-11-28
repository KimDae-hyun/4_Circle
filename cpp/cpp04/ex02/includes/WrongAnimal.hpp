/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:36:07 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:36:09 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal 
{
    protected:
        std::string type;
        
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal & src);
        virtual ~WrongAnimal();
     	
        WrongAnimal & operator=(const WrongAnimal &src);

        void makeSound() const;
        std::string getType() const;
};

#endif
