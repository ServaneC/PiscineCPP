/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 10:41:59 by schene            #+#    #+#             */
/*   Updated: 2020/12/21 13:17:25 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>


template <typename T>
class MutantStack : public std::stack<T>
{	
	public:
		MutantStack() {}
		MutantStack(MutantStack const & to_copy);
		~MutantStack() {}
		MutantStack			&operator=(MutantStack const & rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void) {return (this->c.begin());};
		iterator	end(void) {return (this->c.end());};
};

#endif
