/*******************************************************************
*   Source Code CS221ProgrammingAssignment1
*   Wesley Adams
*   Programming Assignment 1 The Book Worm
*
*   This program is entirely my own work
*******************************************************************/

#include <iostream>
#include <string.h>
#include <cmath>
#include "BookRecord.h"

using namespace std;


int main()
{
	char x;

	//Test one
	BookRecord* br = new BookRecord();
	char name[32];
	br->setTitle("Programming in C++");
	br->getTitle(name);

	//compare
	if (strcmp(name, "Programming in C++") == 0)
	{
		cout << "The test1 was successful" << endl;
	}

	//Test two
	long sNum;
	br->setStockNum(12345);
	sNum = br->getStockNum();

	//compare
	if (sNum == 12345)
	{
		cout << "The test2 was successful" << endl;
	}

	//Test three
	int cl;
	br->setClassification(123);
	br->getClassification(cl);
	if (cl == 123)
	{
		cout << "The test3 was successful" << endl;
	}

	//Test four
	double cost;
	br->setCost(50.50);
	br->getCost(&cost);
	if (cost == 50.50)
	{
		cout << "The test4 was successful" << endl;
	}
	//Test five
	int num;
	br->setNumberInStock(15);
	num = br->getNumberInStock();

	if (num == 15)
	{
		cout << "The test5 was successful" << endl;
	}


	cin >> x;
	return 0;
}



