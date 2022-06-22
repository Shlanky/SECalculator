#pragma once
#include <string>
#include "IBaseCommand.h"
#include "Processor.h"
class Addition:public IBaseCommand
{
private:
	Processor* process = nullptr;
	int one = 0;
	int two = 0;
public:
	Addition(Processor* _process, int _one, int _two)
	{
		process = _process;
		one = _one;
		two = _two;
	}
	std::string Execute()
	{
		return process->Addition(one, two);

	}

};

