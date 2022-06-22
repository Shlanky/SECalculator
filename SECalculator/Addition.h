#pragma once
#include <string>
class Addition
{
public:

	std::string Execute(int one, int two)
	{
		std::string add = std::to_string(one + two);
		return add;
	}

};

