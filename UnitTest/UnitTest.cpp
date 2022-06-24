#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Stratos\Desktop\SECalculator\SECalculator\Processor.h"
#include "C:\Users\Stratos\Desktop\SECalculator\SECalculator\IBaseCommand.h"
#include <wx/wx.h>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	Processor* process = Processor::GetInstance();
	TEST_CLASS(UnitTest)
	{
	public:
		TEST_METHOD(AddTwoPlusTwo)
		{
			wxString results;
			
			results = process->Addition(2, 2);
			Assert::AreEqual(results, "4");
		}
		TEST_METHOD(SubtractTwoMinusTwo)
		{
			wxString results;

			results = process->Subtraction(2,2);
			Assert::AreEqual(results, "0");
		}
		TEST_METHOD(MultTwoTimesThree)
		{
			wxString results;

			results = process->Multiply(2, 3);
			Assert::AreEqual(results, "6");
		}
		TEST_METHOD(DivTwentyByTwo)
		{
			wxString results;

			results = process->Division(20, 2);
			Assert::AreEqual(results, "10");
		}


		//Bin & Hex
		TEST_METHOD(BinaryWorksNormally)
		{
			wxString results;

			process->SetBaseNumber(3);
			results = process->GetBinary();
			Assert::AreEqual(results, "11111111111111111111111111111111");
		}
		TEST_METHOD(BinaryReturnsBigNum)
		{
			wxString results;

			process->SetBaseNumber(55);
			results = process->GetBinary();
			Assert::AreEqual(results, "11111111111111111111111111111111");
		}
		TEST_METHOD(BinaryNoFunction)
		{
			wxString results;

			process->SetBaseNumber(3);
			results = process->GetBinary();
			Assert::AreNotEqual(results, "");
		}
		TEST_METHOD(HexaWorksNormally)
		{
			wxString results;

			process->SetBaseNumber(3);
			results = process->GetHexaDecimal();
			Assert::AreEqual(results, "0x3;");
		}
		TEST_METHOD(HexaReturns16Plus)
		{
			wxString results;

			process->SetBaseNumber(17);
			results = process->GetHexaDecimal();
			Assert::AreEqual(results, "0x1;");
		}
		TEST_METHOD(HexaNoFunction)
		{
			wxString results;

			process->SetBaseNumber(3);
			results = process->GetHexaDecimal();
			Assert::AreNotEqual(results, "");
		}
	};
}
