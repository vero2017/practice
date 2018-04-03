/*
 * tarolo.h
 *
 *  Created on: Apr 3, 2018
 *      Author: vero
 */

#ifndef TAROLO_H_
#define TAROLO_H_


class Tarolo {

public:
	Tarolo ();
	Tarolo (unsigned int count);

	~Tarolo ();

	void kiir ();
	void hozzaad (int number);

private:
	int * _numbers;
	unsigned int _count;



};




#endif /* TAROLO_H_ */
