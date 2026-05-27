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