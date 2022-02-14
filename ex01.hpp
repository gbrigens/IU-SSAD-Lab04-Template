#pragma once // prevents multiple definitions

#include <iostream>
#include <string>  
#include <sstream>
using namespace std;

std::ostringstream out1; 

/*Goal: practice creating and using & inheriting classes
** create a class Flower with default constructor that has only one instruction:
**             out1 << "Hello, Flower!" << endl;
** Flower has one public string attribute called 'bloomtime' with an initial value "NA"
** Flower also has a public method 'void print_bloomtime()' this method has also one instruction:
**             out1 << "Bloom time: " << bloomtime << endl;
**--------------------------------------------------------
** Create a derived class called Rose. The derived class should have public access to Flower
** Rose has default constructor with only one instruction:
**             out1 << "Hello, Rose!" << endl;
** Rose has one public string attribute called 'fragrance' with an initial value "NA"
** Rose also has a public method 'void print_fragrance()' this method has also one instruction:
**             out1 << "Fragrance: " << fragrance << endl;
**--------------------------------------------------------
** *****************Important*****************************
** WHEN YOU'RE READY, GO to ex1(string, string), REMOVE THE TEMP return STATEMENT
** & UNCOMMENT THE BLOCK OF STATEMENTS INSIDE THE FUNCTION.
*/

// Put your code here

std::string ex1(string bloomtime, string fragrance) {
   // out1.str("");
   // out1.clear();
   // Rose rose;
   // rose.bloomtime = bloomtime;
   // rose.fragrance = fragrance;
   // rose.print_bloomtime();
   // rose.print_fragrance();
   // return out1.str();
   ..
   
   return "WHEN YOU'RE READY REMOVE THIS LINE & UNCOMMENT THE BLOCK OF STATEMENTS ABOVE";
}
