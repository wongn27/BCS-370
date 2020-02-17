#include <iostream>
#include <string>
#include <random>
#include <fstream>
#include "RandomStream.h"

// produces the output file
void randomStream(std::string fileName, int length) {

	std::ofstream outputFile(fileName);
	
char letters[] = {'A', 'D', 'P', 'E', 'C', 'S'};

	// A uniformly-distributed integer random number generator that produces non-deterministic random numbers
	std::random_device randomDevice;
	// Mersenne Twister 19937 pseudo - random generator of 32 - bit numbers with a state size of 19937 bits
	std::mt19937 generator(randomDevice());
	// Random char distribution that produces char values according to a uniform discrete distribution
	std::uniform_int_distribution<> range(0, 5);

	// Random number distribution that produces integer values according to a uniform discrete distribution
	std::uniform_int_distribution<> number(INT_MIN, INT_MAX);

	// Prints a number of random letters according to the number the user specified 
	for (int i = 0; i < length; i++) {
		char letter = letters[range(generator)];
		outputFile << letter;

		// If the letter is A, print out a space, followed by a random number
		if (letter == 'A') {
			outputFile << ' ' << number(generator);
		}
		outputFile << '\n';
	}
	outputFile.close();
}
