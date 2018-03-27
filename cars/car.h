/*
 * car.h
 *
 *  Created on: Mar 20, 2018
 *      Author: vero
 */

#include <string>

using namespace std;

#ifndef CAR_H_
#define CAR_H_

class Car {
	public:
		Car(string modelToSet, unsigned int yearToSet, unsigned int weightToSet);
	//  Car () {};
		~Car();

		unsigned int getYear ();
	//	void setYear (unsigned int YearToSet);
		unsigned int getWeight ();
	//	void setWeight (unsigned int weightToSet);
		string getModel ();
	//  void setModel (string modelToSet);

		static unsigned int count;
		char *Trunk;

	private:
		unsigned int Year;
		unsigned int Weight;
		string Model;
};

#endif /* CAR_H_ */
