/*
 * main.cpp
 *
 *  Created on: Mar 20, 2018
 *      Author: vero
 */

/*
 * main.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: vero
 */

#include <iostream>
#include <string>
#include "car.h"

using namespace std;

int main () {
	{
		Car c1("Opel Corsa", 1992, 890);
		cout << "count: " << Car::count << endl;


		Car c2("Opel Vectra", 2004, 1280);

		cout << "Az autok: \n" << c1.getModel() << ", tömeg: " << c1.getWeight() << ", év: " << c1.getYear() << endl;
		cout << c2.getModel() << ", tömeg: " << c2.getWeight() << ", év: " << c2.getYear() << endl;

		cout << "count: " << Car::count << endl;
	}

	return 0;
}

