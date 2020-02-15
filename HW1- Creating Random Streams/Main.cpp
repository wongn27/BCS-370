//******************************************************
// File: Main.cpp
//
// Purpose: Main will ask the user for the name of a
//          file and a number, producing an output file.
//          The number of lines in the file is the 
//          same as the number provided by the user.
//          The file will produce a letter (A,D,P,E,C,S) 
//          that will be randomly chosen. If the letter 
//          is an A, a space will follow and a randomly 
//          chosen number between INT_MIN and INT_MAX.         
//
// Compiler: Visual Studio 2019
//
//******************************************************

#include <iostream>
#include <fstream>
#include <climits>
#include <string>
#include "RandomStream.h"

int main()
{
    std::string fileName;
    int number;
    std::ifstream inputFile;
    
    std::cout << "Please input a filename: ";
    std::cin >> fileName;
    std::cout << "How many iterations: ";
    std::cin >> number;

    randomStream(fileName, number);
}
