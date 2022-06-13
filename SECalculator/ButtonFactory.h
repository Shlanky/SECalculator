#pragma once
#include "cMain.h"
class ButtonFactory
{
private:
	cMain* buttonfac = nullptr;
public:
	ButtonFactory(cMain* _temp);
	~ButtonFactory();

	wxButton* Neg();
	wxButton* Button0();
	wxButton* Dot();
	wxButton* Submit();
	wxButton* Button1();
	wxButton* Button2();
	wxButton* Button3();
	wxButton* AdditionOp();
	wxButton* Button4();
	wxButton* Button5();
	wxButton* Button6();
	wxButton* SubtractionOp();
	wxButton* Button7();
	wxButton* Button8();
	wxButton* Button9();
	wxButton* MultiplicationOP();
	wxButton* ButtonClear();
	wxButton* DivisoinOp();
	wxButton* Mod();

};

