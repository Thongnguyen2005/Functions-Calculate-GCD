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
 * PrintHeader
 *   This function takes parameters of output (fout or cout), programmer's name,
 *   class, time, lab number, and lab name to output header with proper format.
 *   - returns nothing.
 ******************************************************************************/
void PrintHeader(ostream &output,		  // OUT - output file or console
				 const string NAME,       // IN - programmer's name
				 const string CLASS_NAME, // IN - class's name
				 const string TIME,		  // IN - class's period
				 const int NUM_LAB,		  // IN - lab number
				 const string NAME_LAB)	  // IN - lab name
{
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
}



