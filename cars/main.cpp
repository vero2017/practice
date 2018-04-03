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

//ostream& operator<<(ostream &output, Car &car);
//void printCar(ostream out, Car car);

int main () {
	{
		Car c1("Opel Corsa", 1992, 890);
		cout << "count: " << Car::count << endl;


		Car c2("Opel Vectra", 2004, 1280);

		cout << "Az autok: \n";
//		cout << c1.getModel() << ", tömeg: " << c1.getWeight() << ", év: " << c1.getYear() << endl;
//		cout << c2.getModel() << ", tömeg: " << c2.getWeight() << ", év: " << c2.getYear() << endl;
		cout << c1 << c2; // ((cout << c1) ==> cout << c2);

		cout << "count: " << Car::count << endl;
	}

	return 0;
}

ostream& operator<<(ostream &output, Car &car) {
	return output << car.getModel() << ", tömeg: " << car.getWeight() << ", év: " << car.getYear()
			<< ", titok: " << car.secret << endl;
	// mivel az "<<" operátor viszatérési értéke maga az ostream (esetünkben a cout) ezért ha
	// returnölöm az egész kifejezést az ugyanolyan mintha azt írnám, hogy return output;
}

