#include "BookRecord.h"
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

//The default constructor
//m_sTitle = "", m_lStockNum = 0, m_iClassification = 0, m_dCost = 0.0, and m_iCount = 0.
BookRecord::BookRecord()
{
	strcpy(m_sTitle, "");
	m_lStockNum = 0;
	m_iClassification = 0;
	m_dCost = 0;
	m_iCount = 0;
}

//This constructor shall set the member variables to the values passed into the function and initialize the m_iCount variable to one (1)
BookRecord::BookRecord(const char *title, long sn, int cl, double cost)
{
	strcpy(m_sTitle, title);
	m_lStockNum = sn;
    m_iClassification = cl;
	m_dCost = cost;
	m_iCount = 1;
}

//A call to this function will copy the member variable m_sTitle into the character array pointed to by the function argument.
void BookRecord::getTitle(char *title)
{
	strcpy(title, m_sTitle);
}

//	The setTitle() function will copy the function argument into the member variable m_sTitle.
void BookRecord::setTitle(const char *title)
{
	strcpy(m_sTitle, title);

	//test internal value
	cout<<"Inside setTitle function m_sTitle is: "<<m_sTitle<<endl;
}

//The getStockNum() function shall return the value stored in the member variable m_lStockNum
long BookRecord::getStockNum()
{
	return m_lStockNum;
}

//The setStockNum() function will copy the function argument into the member variable m_lStockNum.
void BookRecord::setStockNum(long sn)
{
	m_lStockNum = sn;

	//test internal value
	cout<<"Inside setStockNum function m_lStockNum is: "<<m_lStockNum<<endl;
}

//The getClassification() function shall be defined as a reference function. 
//A call to this function will copy the member variable m_iClassification into the integer variable referenced by the function argument.
void BookRecord::getClassification(int& cl)
{
	cl = m_iClassification;
}

//The setClassification() function will copy the function argument into the member variable m_iClassification.
void BookRecord::setClassification(int cl)
{
	m_iClassification = cl;

	//test internal value
	cout<<"Inside setClassification function m_iClassification is: "<<m_iClassification <<endl;
}

//A call to this function will copy the member variable m_dCost into the double variable pointed to by the function argument.
void BookRecord::getCost(double *c)
{
	*c = m_dCost;
}
	
//The setCost() function will copy the function argument into the member variable m_dCost.
void BookRecord::setCost(double c)
{
	m_dCost = c;

	//test internal value
	cout<<"Inside setCost function m_dCost is: "<<m_dCost <<endl;
}

//The getNumberInStock() function shall return the value stored in the member variable m_iCount. 
int BookRecord::getNumberInStock()
{
	return m_iCount;
}
	
//The setNumberInStock() function will copy the function argument into the member variable m_iCount.
void BookRecord::setNumberInStock(int count)
{
	m_iCount = count;

	//test internal value
	cout<<"Inside setNumberInStock function m_iCount is: "<<m_iCount <<endl;
}

//This function shall print to the screen all data found in the record. Data should all be printed on a single line.
void BookRecord::printRecord()
{
	cout << m_sTitle << "|" << m_lStockNum << "|" << m_iClassification << "|" << m_dCost << "|" << m_iCount << "|";
}


BookRecord::~BookRecord()
{
}
