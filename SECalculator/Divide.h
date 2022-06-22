#pragma once
#include <string>
class Divide
{
public:

	std::string Execute(int one, int two)
	{
		std::string divi = std::to_string(one / two);
		return divi;
	}
};

