/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:23:03 by daekim            #+#    #+#             */
/*   Updated: 2021/11/21 17:23:32 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	public:
    	Karen();
   		~Karen();
		void complain( std::string level );

    private:
		void debug( void );
    	void info( void );
    	void warning( void );
    	void error( void );
};

#endif
