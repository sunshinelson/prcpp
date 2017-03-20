/*
/*
//============================================================================
// Name        :SpeicherbedarfPrimTypen.cpp
 *
 *  Created on: 20.03.2017
 *      Author: Davina
 */

#include <iostream> // import, damit cout und endl bekannt sind
using namespace std; // damit man nicht std::cout und std::endl schreiben muss

int main(){
	cout << sizeof(char) << endl; // auf meiner Maschine: 1
	cout << sizeof(short) << endl; // auf meiner Maschine: 2
	cout << sizeof(int) << endl; // auf meiner Maschine: 4
	cout << sizeof(long) << endl; // auf meiner Maschine: 4
	cout << sizeof(long long) << endl; // auf meiner Maschine: 8
	cout << sizeof(float) << endl; // auf meiner Maschine: 4
	cout << sizeof(double) << endl; // auf meiner Maschine: 8
	cout << sizeof(long double) << endl; // auf meiner Maschine: 12
}





