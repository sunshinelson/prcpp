/*
 * utility.cpp
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

#include "utility.h"

int ggT(int a, int b){
	int r = 1;
	while (r!=0){
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

