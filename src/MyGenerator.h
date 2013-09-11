/*
 * MyGenerator.h
 *
 *  Created on: 17.07.2013
 *      Author: nastya
 */

#ifndef MYGENERATOR_H_
#define MYGENERATOR_H_

#include <stdlib.h>
#include <time.h>
#include <vector>
#include <list>
#include <algorithm>

template<template<typename, typename > class container>
class Generator
{
	private:
		int quantity;
		container<int, std::allocator<int> > _numbers;
	private:
		void Clean();
		void Create();
	public:
		Generator(int quantity);
		void DeleteNumbers(int min);
		int CountUniqueNumbers();
		void CleanAndCreate();
};



#endif /* MYGENERATOR_H_ */
