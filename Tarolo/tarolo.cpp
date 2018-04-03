/*
 * tarolo.cpp
 *
 *  Created on: Apr 3, 2018
 *      Author: vero
 */

#include "tarolo.h"
#include <iostream>

using namespace std;

Tarolo::Tarolo() { // Tarolo::Tarolo():_count(0) {

	_count = 0;
	cout << "Ird be a tomb meretet: ";
	cin >> _count;

	_numbers = new int [_count];
	for (int i=0; i<_count; i++) {
		cout << "Kérem a tomb " << i+1 << ". elemét: ";
		cin >> _numbers[i];
	}

}

Tarolo::Tarolo(unsigned int count) { // Tarolo::Tarolo(unsigned int count):_count(count) {

	_count = count;
	_numbers = new int [_count];
		for (int i=0; i<_count; i++) {
			_numbers [i] = i+1;
		}

}

Tarolo::~Tarolo() {
	delete [] _numbers;

}

void Tarolo::kiir () {

	for (int i=0; i<_count; i++) {
				cout << "A tomb " << i+1 << ". eleme: " << _numbers[i] << endl;
			}

}

void Tarolo::hozzaad (int number) {

	int * newNumbers = new int [_count+1];
	for (int i=0; i<_count; i++) {
		newNumbers [i] = _numbers[i];
	}
	newNumbers[_count] = number;

	delete [] _numbers;

	_numbers = newNumbers;
	_count++; // count+=1

}


