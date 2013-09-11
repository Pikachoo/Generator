/*
 * MyGenerator.cpp
 *
 *  Created on: 17.07.2013
 *      Author: nastya
 */

#include "MyGenerator.h"

template<template<typename, typename > class container>
Generator<container>::Generator(int quantity)
{
	this->quantity = quantity;
	this->Create();

}

template<template<typename, typename > class container>
void Generator<container>::Create() //надо разобраться со временем
{
	srand(time(NULL));
	int first = rand();

	for (int i = 0; i < quantity; i++)
	{
		srand(first);
		_numbers.push_back(0 + rand() % 101);
		first++;
	}
}

template<template<typename, typename > class container>
void Generator<container>::Clean()
{
	_numbers.clear();
}

template<template<typename, typename > class container>
void Generator<container>::CleanAndCreate()
{
	_numbers.clear();
	this->Create();
}

template<template<typename, typename > class container>
void Generator<container>::DeleteNumbers(int min)
{

	for (typename container<int, std::allocator<int> >::iterator it = _numbers.begin(); it != _numbers.end(); ++it)
	{
		if (*it < min)
		{
			_numbers.erase(_numbers.begin(), it);
		}

	}

}

template<template<typename, typename > class container>
int Generator<container>::CountUniqueNumbers()
{
	container<int, std::allocator<int> > uniquevector = _numbers;
	std::unique(uniquevector.begin(), uniquevector.end());

	return uniquevector.size();
}
template class Generator<std::vector> ;
template class Generator<std::list> ;
