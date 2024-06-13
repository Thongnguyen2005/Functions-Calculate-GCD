/*******************************************************************************
 * AUTHOR	  	: Thong Nguyen
 * STUDENT ID   : 1291317
 * LAB 3		: Functions - GCD
 * CLASS	  	: CS1B
 * SECTION	  	: M T W TH: 5pm
 * DUE DATE   	: 06/12/24
 ******************************************************************************/

#include "LAB3.h"

/*******************************************************************************
 * ReadTwoValues
 *   This function takes reference parameters of two integers and column width
 *   to read their values from user's input
 *   - returns nothing
 ******************************************************************************/
void ReadTwoValues(int &num1,			// OUT - first number
				   int &num2,			// OUT - second number
				   const int COL_WIDTH)	// IN - prompt column width
{
	cout << left;
	cout << setw(COL_WIDTH) << "Enter the first integer: ";
	cin  >> num1;

	cout << setw(COL_WIDTH) << "Enter the second integer: ";
	cin  >> num2;

	cin.ignore(1000, '\n');

	cout << endl;
}




