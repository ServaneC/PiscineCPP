/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schene <schene@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:19:17 by schene            #+#    #+#             */
/*   Updated: 2020/12/07 23:29:39 by schene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

struct Data
{
	std::string s1;
	int			n;
	std::string s2;
};

char	random_char(void)
{
	std::string alphnum = "abcdefghijklmnopqrstuvw1234567890";
	int		index = std::rand() % alphnum.size();

	return(alphnum[index]);	
}

void * 	serialize(void)
{
	char	*raw = new char[20];

	for (int i = 0; i < 8; i++)
		raw[i] = random_char();
	*reinterpret_cast<int*>(&raw[8]) = std::rand();
	for (int i = 12; i < 20; i++)
		raw[i] = random_char();	
	return (raw);
}

Data * deserialize(void * raw)
{
	char *raw_bytes = reinterpret_cast<char *>(raw);
	Data *data = new Data;
	
	for (int i = 0; i < 8; i++)
		data->s1.append(1, raw_bytes[i]);
	data->n = *reinterpret_cast<int*>(&raw_bytes[8]);
	for (int i = 12; i < 20; i++)
		data->s2.append(1, raw_bytes[i]);
	return data;
}

int main()
{
	std::srand(std::time(NULL));
	void *raw = serialize();
	Data *data = deserialize(raw);
	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	delete data;
	operator delete (raw);
	return 0;
}