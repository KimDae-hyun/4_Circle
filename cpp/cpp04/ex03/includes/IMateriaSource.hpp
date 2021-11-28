/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 19:38:26 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 19:38:28 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource & operator=(const MateriaSource& src);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria *);
		virtual AMateria *createMateria(std::string const &type);
};

#endif
