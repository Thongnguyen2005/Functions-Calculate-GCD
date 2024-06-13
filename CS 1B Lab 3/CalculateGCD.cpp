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
 * CalculateGCD
 *   This function takes parameters of two integers
 *   - returns the GCD value.
 ******************************************************************************/
int CalculateGCD(int num1,	//IN - first number
				 int num2)	//IN - second number
{
	int remainder;
	int tempRemainder;
	int dividend;
	int divisor;
	int GCD;

	//Determine smaller/larger numbers
	if (num1 > num2)
	{
		dividend = num1;
		divisor = num2;
	}
	else
	{
		dividend = num2;
		divisor = num1;
	}

	// Calculate GCD
	if (dividend == divisor || divisor == 0) // Check if two numbers equal OR
											 // the divisor equals 0
	{
		GCD = dividend;
	}
	else
	{
		remainder = dividend % divisor;
		while(remainder != 0) // Loop until remainder becomes zero
		{
			dividend = divisor;
			divisor = remainder;
			tempRemainder = remainder; // Second-to-last remainder

			remainder = dividend % divisor; // Last remainder
		}

		GCD = tempRemainder;
	}

	return GCD;
}




