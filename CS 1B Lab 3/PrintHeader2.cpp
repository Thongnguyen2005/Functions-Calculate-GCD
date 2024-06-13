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
 * PrintHeader2
 *   This function takes parameters of programmer's name, class, time, lab
 *   number, and lab name.
 *   - returns the string of header with proper format.
 ******************************************************************************/
string PrintHeader2(const string NAME,       	// IN - programmer's name
				    const string CLASS_NAME, 	// IN - class's name
				    const string TIME,			// IN - class's period
				    const int NUM_LAB,			// IN - lab number
				    const string NAME_LAB)		// IN - lab name
{
	ostringstream output;

	output << left;
	output << "******************************************************\n";
	output << "* PROGRAMMED BY : " << NAME
		 << endl;
	output << "* "	  		 << setw(14)<< "CLASS"    << ": " << CLASS_NAME
		 << endl;
	output << "* "	         << setw(14)<< "SECTION"  << ": " << TIME
		 << endl;
	output << "* LAB #"		 << setw(8) << NUM_LAB    << " : " << NAME_LAB
		 << endl;
	output << "******************************************************\n\n";
	output << right;

	return output.str();
}



