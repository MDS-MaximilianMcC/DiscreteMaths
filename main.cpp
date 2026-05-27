#include <iostream>
#include "discretemaths.h"

bool test(float enteredValue, float expectedValue, int& totalTests)
{
	totalTests++;
	bool passed = enteredValue == expectedValue;

	// Show a little error if we failed only
	if (passed == false)
	{
		std::cout << "Test " << totalTests << " failed! Expected " << expectedValue << " but got " << enteredValue << "!" << std::endl;
	}

	return passed;
}

int main()
{
	std::cout << "Hello World!\n";

	int totalTests = 0;
	int testsPassed = 0;

	// TODO: Make proper testing class
	testsPassed += test(Magnitude(-5), 5, totalTests);
	testsPassed += test(Magnitude(-0), 0, totalTests);
	testsPassed += test(Magnitude(0), 0, totalTests);
	testsPassed += test(Magnitude(5), 5, totalTests);

	std::cout << "Passed " << testsPassed << "/" << totalTests << " tests!" << std::endl;

	// Stop the program from closing
	std::cin.get();
}