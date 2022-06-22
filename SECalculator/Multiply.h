#pragma once
#include <string>
#include "IBaseCommand.h"
#include "Processor.h"
class Multiply :public IBaseCommand
{
private:
	Processor* process = nullptr;
	int one = 0;
	int two = 0;
public:
	Multiply(Processor* _process, int _one, int _two)
	{
		process = _process;
		one = _one;
		two = _two;
	}
	std::string Execute()
	{
		return process->Multiply(one, two);

	}
};

