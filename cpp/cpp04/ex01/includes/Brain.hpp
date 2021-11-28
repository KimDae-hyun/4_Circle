/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:51:33 by daekim            #+#    #+#             */
/*   Updated: 2021/11/26 18:51:39 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain & src);
        ~Brain();
        Brain & operator=(const Brain &src);

        void addIdea(std::string idea, int i);
        void copyIdeas(std::string idea, int i);
        std::string outputIdeas(int i) const;
        void showIdeas() const;
};

#endif
