/*
 * main.cpp
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

#include <iostream>
#include "utility.h"
using namespace std;

int main (){
	int i, j;
	std::cout << "i:" << std::endl;
	std::cin >> i;
	std::cout << "j:" << std::endl;
	std::cin >> j;
	std::cout << ggT(i, j) << std::endl;
	std::cout << ggT(24, 6) << std::endl;
	//return 0;
}


