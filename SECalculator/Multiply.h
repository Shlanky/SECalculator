#pragma once
#include <string>
class Multiply
{
public:

	std::string Execute(int one, int two)
	{
		std::string mult = std::to_string(one * two);
		return mult;
	}
};

