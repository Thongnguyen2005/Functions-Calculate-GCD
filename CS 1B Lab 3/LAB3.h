/*******************************************************************************
 * AUTHOR	  	: Thong Nguyen
 * STUDENT ID   : 1291317
 * LAB 3		: Functions - GCD
 * CLASS	  	: CS1B
 * SECTION	  	: M T W TH: 5pm
 * DUE DATE   	: 06/12/24
 ******************************************************************************/

#ifndef LAB3_H_
#define LAB3_H_

#include <iostream>    /* cout, & cin 			  */
#include <iomanip>     /* setw, fix, setprecision */
#include <string>	   /* string 				  */
#include <fstream>	   /* fout fin 				  */
#include <sstream>	   /* ostringstream 		  */
using namespace std;

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
				 const string NAME_LAB);  // IN - lab name

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
				    const string NAME_LAB);		// IN - lab name

/*******************************************************************************
 * ReadTwoValues
 *   This function takes reference parameters of two integers and column width
 *   to read their values from user's input
 *   - returns nothing
 ******************************************************************************/
void ReadTwoValues(int &num1,				// OUT - first number
				   int &num2,				// OUT - second number
				   const int COL_WIDTH);	// IN - prompt column width

/*******************************************************************************
 * CalculateGCD
 *   This function takes parameters of two integers
 *   - returns the GCD value.
 ******************************************************************************/
int CalculateGCD(int num1,	//IN - first number
				 int num2);	//IN - second number

/*******************************************************************************
 * OutputResult
 *   This function takes parameters of two integers and their GCD to output
 *   the result of GCD with proper format
 *   - returns nothing.
 ******************************************************************************/
void OutputResult(int num1,					// IN - first number
				  int num2,					// IN - second number
				  int GCD,					// IN - GCD
				  ofstream &outputFile);	// OUT - output file

#endif /* LAB3_H_ */
