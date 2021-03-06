﻿// ListProcessor.cpp
//Modifeied by jacob Silva
//COSC 2030
// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.
#include "stdafx.h"
#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "cows list  :  " << cows << " with size of: " << cows.size() << " and a sum of : " << cows.sum() << endl << endl;
	cows.insertAsFirst(1.23);
	cout << "cows list  :  " << cows << " with size of: " << cows.size()<<" and a sum of : "<<cows.sum() << endl << endl;
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows <<" with size of: "<<cows.size() << " and a sum of : " << cows.sum() << endl << endl;
	cows.insertAsLast(6.69);
	cout << "cows list  :  " << cows << " with size of: " << cows.size() << " and a sum of : " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << " with size of: " << cows.size() << " and a sum of : " << cows.sum() << endl << endl;
	List horses(cows);
	cout << "cows list  :  " << cows << " with size of: " << cows.size() << " and a sum of : " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << " with size of: "<<horses.size() << " and a sum of : " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(1.45);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  "<<cows << " with size of: " << cows.size() << " and a sum of : " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << " with size of: " << horses.size() << " and a sum of : " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

