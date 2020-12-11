/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:50:20 by schene            #+#    #+#             */
/*   Updated: 2020/12/11 10:33:11 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	fct_float(float const &f)
{
	std::cout << "I'm a float with a value of " << f << std::endl;
}

int main()
{
	float f_array[5] = {1.3, 2.9, 8.5, 4.7, 9.3};

	iter<float>(f_array, 5, &fct_float);
	return 1;
}

// class Awesome
// {
//    public:
//       Awesome( void ) : _n( 42 ) { return; }
//       int get( void ) const { return this->_n; }

//     private:
//       int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main()
// {
//     int tab[] = { 0, 1, 2, 3, 4 };  // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
//     Awesome tab2[5];
  
//     iter( tab, 5, print<int> );
//     iter( tab2, 5, print<Awesome> );
  
//     return 0;
// }