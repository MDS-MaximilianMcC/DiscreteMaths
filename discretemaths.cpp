#include "discretemaths.h"

// TODO: Remove this if its only used like once
bool IsPositiveOrZero(const float number)
{
	if (number == 0) return true;
	return (number > 0);
}

// Same as absolute
float Magnitude(const float number)
{
	return IsPositiveOrZero(number) ? number : -number;
}

// Gets the sign of the number
float Signum(const float number)
{
	return IsPositiveOrZero(number) ? 1 : -1;
}

// TODO: Cast before returning
float Floor(const float number)
{
	// Turn it to an int to get rid of the decimal
	int integer = (int)number;

	// Give back one less if its value has 'changed'
	if (number < 0 && number != integer) return integer - 1;
	return integer;
}

// TODO: Cast before returning
float Ceiling(const float number)
{
	// Turn it to an int to get rid of the decimal
	int integer = (int)number;

	// Give back one more if its value has 'changed'
	if (number > 0 && number != integer) return integer + 1;
	return integer;
}
