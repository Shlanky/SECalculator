#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Stratos\Desktop\SECalculator\SECalculator\ButtonFactory.h"
#include "C:\Users\Stratos\Desktop\SECalculator\SECalculator\ButtonFactory.cpp"
#include "C:\Users\Stratos\Desktop\SECalculator\SECalculator\cMain.h"
#include "C:\Users\Stratos\Desktop\SECalculator\SECalculator\cMain.cpp"
#include <wx/wx.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtonFactoryTest
{
	TEST_CLASS(ButtonFactoryTest)
	{
	public:
		
		TEST_METHOD(TestButton0)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button0();
			Assert::AreEqual(buttonTest->GetId(), 0);
		}
		TEST_METHOD(TestButton1)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button1();
			Assert::AreEqual(buttonTest->GetId(), 1);
		}
		TEST_METHOD(TestButton2)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button2();
			Assert::AreEqual(buttonTest->GetId(), 2);
		}
		TEST_METHOD(TestButton3)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button3();
			Assert::AreEqual(buttonTest->GetId(), 3);
		}
		TEST_METHOD(TestButton4)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button4();
			Assert::AreEqual(buttonTest->GetId(), 4);
		}
		TEST_METHOD(TestButton5)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button5();
			Assert::AreEqual(buttonTest->GetId(), 5);
		}
		TEST_METHOD(TestButton6)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button6();
			Assert::AreEqual(buttonTest->GetId(), 6);
		}
		TEST_METHOD(TestButton7)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button7();
			Assert::AreEqual(buttonTest->GetId(), 7);
		}
		TEST_METHOD(TestButton8)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button8();
			Assert::AreEqual(buttonTest->GetId(), 8);
		}
		TEST_METHOD(TestButton9)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Button9();
			Assert::AreEqual(buttonTest->GetId(), 9);
		}
		TEST_METHOD(TestNeg)
		{
			cMain* main = new cMain();
			ButtonFactory buttonfac = ButtonFactory(main);
			wxButton* buttonTest;
			buttonTest = buttonfac.Neg();
			Assert::AreEqual(buttonTest->GetId(), 10);
		}
	};
}
