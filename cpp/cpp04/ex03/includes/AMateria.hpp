/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:38:13 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:38:20 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;
		
	public :
		AMateria();
		AMateria(const AMateria& src);
		AMateria(std::string const &type);
		AMateria & operator=(const AMateria& src);
		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

class Ice : public AMateria
{
	public :
		Ice();
		Ice(const Ice& src);
		Ice & operator=(const Ice& src);
		virtual ~Ice();

		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

class Cure : public AMateria
{
	public :
		Cure();
		Cure(const Cure& src);
		Cure(std::string const &type);
		Cure & operator=(const Cure& src);
		virtual ~Cure();
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif
