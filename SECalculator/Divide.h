#pragma once
#include <string>
#include "IBaseCommand.h"
#include "Processor.h"
class Divide: public IBaseCommand
{
private:
	Processor* process = nullptr;
	int one=0;
	int two=0;
public:
	Divide(Processor* _process, int _one, int _two)
	{
		process = _process;
		one = _one;
		two = _two;
	}

	std::string Execute()
	{
		return process->Division(one, two);

		/*std::string divi = std::to_string(one / two);
		return divi;*/
	}
};

