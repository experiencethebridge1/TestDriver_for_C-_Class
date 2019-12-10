/**
Sean O'Brien
C++
Creation of a test driver for a different data structure by changing only
the first two steps in the loop.
*/

#include <iostream>
#include <fstream>
#include <string>
// #include <file containing class to be tested>
#include "frac.h"

using namespace std; 


int main(int argc, char *argv[]){

// Declare a variable of the type being tested
// Declare of a fraction type object
    FractionType fraction; 

    ifstream inFile;        // File containing operations
    ofstream outFile;       // File containing output
    string inFileName;      // Input file external name
    string outputFileName;  // Output file external name
    string outputLabel;
    string command;         // Operation to be executed
    int numCommands;        

// Prompt for file names, read file names, and prepare files

    cout << "Enter name of input file; press return." << endl; 
    cin >> inFileName;
    inFile.open(inFileName.c_str());

    cout << "Enter name of output file; press return." << endl;
    cin >> outputFileName; 
    outFile.open(outputFileName.c_str()); 

    cout << "Enter name of test run; press return." << endl; 
    cin >> outputLabel; 
    outFile << outputLabel << endl; 

    inFile >> command;
    numCommands = 0; 
        while (command != "Quit") {

/**
The following should be specific to the structure being 
tested.  Execute the command by invoking the member function
of the same name.  Print the results to the output file.
*/      
            if (command == "Initialize") {
                int numerator, denominator; 
                inFile >> numerator; 
                inFile >> denominator; 
                fraction.Initialize(numerator, denominator); 
                outFile << "Numerator: " << fraction.NumeratorIs() 
                <<  " Denominator: " << fraction.DenominatorIs() << endl; 
                } else if (command == "NumeratorIs"){ 
                        outFile << "Numerator: " << fraction.NumeratorIs() << endl; 
                    
                } else if (command == "DenominatorIs"){
                        outFile << "Denominator: " << fraction.DenominatorIs() << endl; 
                
                } else if (command == "IsZero"){
                        if (fraction.IsZero()){
                            outFile << "Fraction is zero " << endl; 
                        } else {
                            outFile << "Fraction is not zero " << endl; 
                        }
                    
                } else if (command == "IsNotProper"){ 
                        if (fraction.IsNotProper()) {
                            outFile << "Fraction is improper " << endl; 
                        } else { 
                            outFile << "Fraction is proper " << endl; 
                        }

                 } else {
                            outFile << "Whole number is " << fraction.ConvertToProper() << endl; 
                            outFile << "Numerator: " << fraction.NumeratorIs()
                            << " Denominator: " << fraction.DenominatorIs() << endl; 
                        }

            numCommands++;
            cout << "Command number " << numCommands << " completed." << endl; 
            inFile >> command; 
            }

    cout << "Testing completed. " << endl; 
    inFile.close(); 
    outFile.close(); 
    return 0; 
}
