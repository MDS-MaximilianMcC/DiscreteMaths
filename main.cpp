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
	// 1
	testsPassed += test(Magnitude(-5), 5, totalTests);
	testsPassed += test(Magnitude(-0), 0, totalTests);
	testsPassed += test(Magnitude(0), 0, totalTests);
	testsPassed += test(Magnitude(5.2f), 5.2f, totalTests);

	// 5
	testsPassed += test(Signum(5), 1, totalTests);
	testsPassed += test(Signum(0), 1, totalTests);
	testsPassed += test(Signum(-0), 1, totalTests);
	testsPassed += test(Signum(-5), -1, totalTests);

	// 9
	testsPassed += test(Floor(5.356f), 5, totalTests);
	testsPassed += test(Floor(5.999f), 5, totalTests);
	testsPassed += test(Floor(0.9f), 0, totalTests);
	testsPassed += test(Floor(-0.1f), -1, totalTests);
	testsPassed += test(Floor(-5.356f), -6, totalTests);

	// 14
	testsPassed += test(Ceiling(5.356f), 6, totalTests);
	testsPassed += test(Ceiling(5.001f), 6, totalTests);
	testsPassed += test(Ceiling(0.1f), 1, totalTests);
	testsPassed += test(Ceiling(-0.1f), 0, totalTests);
	testsPassed += test(Ceiling(-5.356f), -5, totalTests);
	
	std::cout << "\nPassed " << testsPassed << "/" << totalTests << " tests!" << std::endl;

	// Stop the program from closing
	std::cin.get();
}