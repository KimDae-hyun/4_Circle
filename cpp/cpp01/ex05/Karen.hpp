/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:22:45 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:22:48 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
    private:
	    void debug( void );
        void info( void );
        void warning( void );
        void error( void );
	
    public:
        Karen();
        ~Karen();
	    void complain( std::string level );
};

#endif
