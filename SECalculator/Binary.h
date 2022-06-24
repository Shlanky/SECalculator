#pragma once
#include <string>
#include "IBaseCommand.h"
#include "Processor.h"
class Binary :public IBaseCommand
{
private:
	Processor* process = nullptr;
	int one = 0;
public:
	Binary(Processor* _process, int _one)
	{
		process = _process;
		one = _one;
	}
	std::string Execute()
	{
		process->SetBaseNumber(one);
		return process->GetBinary();

	}

};