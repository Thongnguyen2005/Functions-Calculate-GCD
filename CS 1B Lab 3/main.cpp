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
 * Functions - GCD
 * -----------------------------------------------------------------------------
 * This program reads in a set of data including:
 * 	  - first integer number
 * 	  - second integer number
 * Then calculate and output the GCD (Greatest Common Divisor)
 * -----------------------------------------------------------------------------
 * INPUT:
 *    num1         : first integer number
 *    num2 	   	   : second integer number
 *
 * OUTPUT: This program will output:
 *    GCD   	   : Greatest Common Divisor
 *
 *------------------------------------------------------------------------------
 * EXAMPLE INPUT / OUTPUT:
 * 		Enter the first integer:  72
 * 		Enter the second integer: 32
 *
 * 		Enter the first integer:  99
 * 		Enter the second integer: 30
 *
 * 		Enter the first integer:  48
 * 		Enter the second integer: 18
 *
 * 		Enter the first integer:  12
 * 		Enter the second integer: 0
 *
 * 		Thank you for using my GCD calculator!
 ******************************************************************************/

int main()
{
	/***************************************************************************
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the lab
	 *
	 * -------------------------------------------------------------------------
	 * INPUT - USED FOR INPUT PROMPTS
	 * -------------------------------------------------------------------------
     * PROMPT_COL	  : the column width of input prompt
     *
     * -------------------------------------------------------------------------
	 * PROCESSING - USED TO RUN FOR LOOP FOUR TIMES
	 * -------------------------------------------------------------------------
     * NUM_LOOP : number of times the for loop runs
     *
	 **************************************************************************/

	// OUTPUT - USED FOR CLASS HEADING
	const string PROGRAMMER = "Thong Nguyen";
	const string CLASS      = "CS1B";
	const string SECTION    = "M T W TH: 5pm";
	const int    LAB_NUM    = 3;
	const string LAB_NAME   = "Functions - GCD";

	// INPUT - USED FOR INPUT PROMPTS
	const int PROMPT_COL = 26;

	// PROCESSING - USED TO RUN FOR LOOP FOUR TIMES
	const int NUM_LOOP = 4;

	/***************************************************************************
	 * VARIABLES
	 **************************************************************************/
	int num1;		// IN & CALC & OUT - First number
	int num2;		// IN & CALC & OUT - Second number
	int GCD;		// CALC & OUT - Greatest common divisor
	int count;		// CALC - counter of for loop
	ofstream fout;	// output file

	fout.open("OFile.txt");

	/***************************************************************************
	 * OUTPUT - Class Heading
	 **************************************************************************/
	// ostream
	PrintHeader(cout, PROGRAMMER, CLASS, SECTION, LAB_NUM, LAB_NAME);
	PrintHeader(fout, PROGRAMMER, CLASS, SECTION, LAB_NUM, LAB_NAME);

	// ostringstream
	cout << PrintHeader2(PROGRAMMER, CLASS, SECTION, LAB_NUM, LAB_NAME);
	fout << PrintHeader2(PROGRAMMER, CLASS, SECTION, LAB_NUM, LAB_NAME);

	// Loop four times
	for(count = 0; count < NUM_LOOP; count++)
	{
		// Read two numbers
		ReadTwoValues(num1, num2, PROMPT_COL);

		// Determine GCD
		GCD = CalculateGCD(num1, num2);

		// Output result
		OutputResult(num1, num2, GCD, fout);
	}


	// Output thank you prompt
	cout << "Thank you for using my GCD calculator!" << endl;

	fout.close();

	//Reset fix and setprecision
	cout.unsetf(ios::fixed);
	cout << setprecision(6);

	return 0;
}
