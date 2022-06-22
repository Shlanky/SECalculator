#pragma once
#include <string>
class IBaseCommand
{
public:

	virtual std::string Execute(int one, int two) = 0;

};

