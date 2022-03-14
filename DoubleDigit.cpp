
#include "DoubleDigit.h"

//Default Constructor
DoubleDigit::DoubleDigit(): units('0'), tens('0'){ cout << "Default Constructor!" << endl; }
//Constructor 1
DoubleDigit::DoubleDigit(int number) //21
{
	changeValue(number);
	cout << "Constructor 1!" << endl;
}
//Constructor 2
DoubleDigit::DoubleDigit(char tens, char units)
{
	this->tens = tens;
	this->units = units;
	cout << "Constructor 2!" << endl;
}
//destructor
DoubleDigit::~DoubleDigit()
{
	cout << "I'm dtor " << endl;
	print();
}
//Interface functions
void DoubleDigit::setUnits(char tav)
{
	this->units = tav;
}
//Interface functions
void DoubleDigit::setTens(char tav)
{
	this->tens = tav;
}
//Interface functions
char DoubleDigit::getUnits() const
{
	return this->units;
}
//Interface functions
char DoubleDigit::getTens() const
{
	return this->tens;
}
//Function that print the object
void DoubleDigit::print() const
{
	cout << "The double-ditit number is:";
	cout << this->tens << this->units << endl;
}
//Conversion to int Function
int DoubleDigit::intConversion()
{
	int x = this->units - '0';
	int y = this->tens - '0';
	int number = x + (y * 10);
	{
		if (number < 10)
		{
			cout << "The result is:0" << number << endl;
		}
		else 
		{
			cout << "The result is:" << number << endl;
		}

	}
	return number;
}
//Function thst change the objects
void DoubleDigit::changeValue(int number)
{
	int num = checking(number); //52
	int num1 = num % 10; //num1=1
	int num2 = num / 10; //num2=2
	this->units = num1 + '0';
	this->tens = num2 + '0';
}
//Function that checks the correctness of the value
int DoubleDigit::checking(int num)
{
	if (num < 0) //-21
	{
		num = num * (-1); // (-21)*(-1) = 21
		cout << "The number is negative" << endl;
	}
	if (num > 99) // 1234 --> 34
	{
		num = num % 100; //34
		cout << "The number is not double-digit" << endl;
	}
	return num;
}
