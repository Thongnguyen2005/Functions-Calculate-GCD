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
 * OutputResult
 *   This function takes parameters of two integers and their GCD to output
 *   the result of GCD with proper format
 *   - returns nothing.
 ******************************************************************************/
void OutputResult(int num1,				// IN - first number
				  int num2,				// IN - second number
				  int GCD,				// IN - GCD
				  ofstream &outputFile)	// OUT - output file
{
	outputFile << "The GCD for " << num1 << " & " << num2 << " = " << GCD
			   << endl 			 << endl;
}



