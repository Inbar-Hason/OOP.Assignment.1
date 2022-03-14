
#ifndef __DOUBLEDIGIT_H
#define __DOUBLEDIGIT_H

#include <iostream>
using namespace std;

class DoubleDigit 
{
private: // Data Members 
	char units; 
	char tens; 
public: // Methods
	DoubleDigit(); // Default Constructor
	DoubleDigit(int number); // Constructor 1
	DoubleDigit(char tens, char units); //  Constructor 2
	~DoubleDigit(); // destructor
	void setUnits(char tav); //Interface functions
	void setTens(char tav); //Interface functions
	char getUnits()const; //Interface functions
	char getTens()const; //Interface functions
	void print()const;  //Function that print the object 
	int intConversion(); //Conversion to int Function
	void changeValue(int number); //Function thst change the objects
	int checking(int num); // A function that checks the correctness of the value
};

#endif

