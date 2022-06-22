#pragma once
#include <string>
class Subtraction
{
public:

	std::string Execute(int one, int two)
	{
		std::string sub = std::to_string(one - two);
		return sub;
	}
};

