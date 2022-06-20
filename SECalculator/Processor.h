#pragma once
#include <string>
class Processor
{
private:
	static Processor* _processor;
	int baseNumber;
	Processor() {};//empty
public:
	
	static Processor* GetInstance()
	{
		if (_processor == nullptr)
		{
			_processor = new Processor();
		}
		return _processor;
	}
	Processor(Processor& other) = delete;
	void operator=(const Processor& other) = delete;

	void SetBaseNumber(int number) {
		baseNumber = number;
	}
	std::string GetDecimal()
	{
		return std::to_string(baseNumber);
	}

	std::string GetBinary()
	{
		std::string results = "";
		int number = baseNumber;
		for (int i = 0; i < 32; i++)
		{
			if (baseNumber % 2 == 0)
			{
				results = "0" + results;
			}
			else {
				results = "1" + results;
			}
			number = number / 2;


		}
		return results;
	}
	std::string GetHexaDecimal()
	{
		std::string results = ";";
		int number = baseNumber;
		while (number > 0)
		{
			int mod = number % 16;
			if (mod < 10)
			{
				results = std::to_string(mod) + results;
			}
			else if (mod == 10) {
				results = "A" + results;
			}
			else if (mod == 11) {
				results = "B" + results;
			}
			else if (mod == 12) {
				results = "C" + results;
			}
			else if (mod == 13) {
				results = "D" + results;
			}
			else if (mod == 14) {
				results = "E" + results;
			}
			else if (mod == 15) {
				results = "F" + results;
			}
			results = number % 16;
		}
		results = "0x" + results;

		return results;
	}

	std::string Addition(int one, int two)
	{
		std::string add = std::to_string(one + two);
		return add;
	}
	std::string Subtraction(int one, int two)
	{
		std::string Subtract = std::to_string(one - two);
		return Subtract;
	}
	std::string Multiply(int one, int two)
	{
		std::string Multiply = std::to_string(one * two);
		return Multiply;
	}
	std::string Division(int one, int two)
	{
		std::string Division = std::to_string(one / two);
		return Division;
	}
};
Processor* Processor::_processor = nullptr;

