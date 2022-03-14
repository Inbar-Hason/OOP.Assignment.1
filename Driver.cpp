#include "DoubleDigit.h"

int main()
{
	cout << "------------------Creating objects:------------------" << endl;
	DoubleDigit num1;
	DoubleDigit num2(2);
	DoubleDigit num3('6', '5');
	DoubleDigit num4(-1215);
	DoubleDigit num5(1992);
	cout << endl;
	cout << endl;
	cout << "------------------Printing objects:------------------" << endl;
	num1.print();
	num2.print();
	num3.print();
	num4.print();
	num5.print();
	cout << endl;
	cout << endl;
	cout << "------------------intConversion function:------------------" << endl;
	num1.intConversion();
	num2.intConversion();
	num3.intConversion();
	num4.intConversion();
	num5.intConversion();
	cout << endl;
	cout << endl;
	cout << "------------------changeValue function:------------------" << endl;
	num1.changeValue(52);
	num1.print();
	num2.changeValue(1);
	num2.print();
	num3.changeValue(-1);
	num3.print();
	num4.changeValue(0);
	num4.print();
	cout << endl;
	cout << endl;
	cout << "------------------End program !------------------" << endl;
	return 0;
}