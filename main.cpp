#include <iostream>
#include "discretemaths.h"

void test()
{

}

int main()
{
	std::cout << "Hello World!\n";

	int testsPassed = 0;

	// TODO: Make proper testing class

	std::cout << Magnitude(-5) << std::endl;
	std::cout << Magnitude(0) << std::endl;
	std::cout << Magnitude(-0) << std::endl;
	std::cout << Magnitude(5) << std::endl;

	// Stop the program from closing
	std::cin.get();
}