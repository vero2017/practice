/*
 * car.cpp
 *
 *  Created on: Mar 20, 2018
 *      Author: vero
 */


#include "car.h"

using namespace std;

//Car::Car(string modelToSet, unsigned int yearToSet, unsigned int weightToSet) {
//	Model = modelToSet;
//	Year = yearToSet;
//	Weight = weightToSet;
//}

Car::Car(string modelToSet, unsigned int yearToSet, unsigned int weightToSet): Year(yearToSet), Weight(weightToSet), Model(modelToSet)
{
	Car::count++;
	secret = 12345;
}

Car::~Car()
{
	--Car::count;
}

unsigned int Car::getYear() {
	return Year;
}

unsigned int Car::getWeight () {
	return Weight;
}

string Car::getModel() {
	return Model;
}

unsigned int Car::count = 0;
