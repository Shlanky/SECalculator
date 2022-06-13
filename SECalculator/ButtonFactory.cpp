#include "ButtonFactory.h"

/*wxButton* ButtonFactory::Createbutton(wxWindow window, int ID, wxString string, wxPoint pointer, wxSize size)
{
	return new wxButton(window, ID, string, pointer, size);
}*/
ButtonFactory::ButtonFactory(cMain* _temp)
{
	buttonfac = _temp;
}
ButtonFactory::~ButtonFactory()
{
	
}

wxButton* ButtonFactory::Neg()
{
	wxButton* Neg = new wxButton(buttonfac, 1, "-", wxPoint(15, 400), wxSize(75, 75));
	return Neg;
}

wxButton* ButtonFactory::Button0()
{
	wxButton* Button0 = new wxButton(buttonfac, 2, "0", wxPoint(90, 400), wxSize(75, 75));
	return Button0;
}

wxButton* ButtonFactory::Dot()
{
	wxButton* Dot = new wxButton(buttonfac, 3, ".", wxPoint(165, 400), wxSize(75, 75));
	return Dot;
}

wxButton* ButtonFactory::Submit()
{
	wxButton* Submit = new wxButton(buttonfac, 4, "=", wxPoint(260, 400), wxSize(75, 75));
	return Submit;
}

wxButton* ButtonFactory::Button1()
{
	wxButton* Button1 = new wxButton(buttonfac, 5, "1", wxPoint(15, 325), wxSize(75, 75));
	return Button1;
}

wxButton* ButtonFactory::Button2()
{
	wxButton* Button2 = new wxButton(buttonfac, 6, "2", wxPoint(90, 325), wxSize(75, 75));
	return Button2;
}

wxButton* ButtonFactory::Button3()
{
	wxButton* Button3 = new wxButton(buttonfac, 7, "3", wxPoint(165, 325), wxSize(75, 75));
	return Button3;
}

wxButton* ButtonFactory::AdditionOp()
{
	wxButton* AdditionOp = new wxButton(buttonfac, 8, "+", wxPoint(260, 325), wxSize(75, 75));
	return AdditionOp;
}

wxButton* ButtonFactory::Button4()
{
	wxButton* Button4 = new wxButton(buttonfac, 9, "4", wxPoint(15, 250), wxSize(75, 75));
	return Button4;
}

wxButton* ButtonFactory::Button5()
{
	wxButton* Button5 = new wxButton(buttonfac, 10, "5", wxPoint(90, 250), wxSize(75, 75));
	return Button5;
}

wxButton* ButtonFactory::Button6()
{
	wxButton* Button6 = new wxButton(buttonfac, 11, "6", wxPoint(165, 250), wxSize(75, 75));
	return Button6;
}

wxButton* ButtonFactory::SubtractionOp()
{
	wxButton* SubtractionOp = new wxButton(buttonfac, 12, "-", wxPoint(260, 250), wxSize(75, 75));
	return SubtractionOp;
}

wxButton* ButtonFactory::Button7()
{
	wxButton* Button7 = new wxButton(buttonfac, 13, "7", wxPoint(15, 175), wxSize(75, 75));
	return Button7;
}

wxButton* ButtonFactory::Button8()
{
	wxButton* Button8 = new wxButton(buttonfac, 14, "8", wxPoint(90, 175), wxSize(75, 75));
	return Button8;
}

wxButton* ButtonFactory::Button9()
{
	wxButton* Button9 = new wxButton(buttonfac, 15, "9", wxPoint(165, 175), wxSize(75, 75));
	return Button9;
}

wxButton* ButtonFactory::MultiplicationOP()
{
	wxButton* MultiplicationOP = new wxButton(buttonfac, 16, "x", wxPoint(260, 175), wxSize(75, 75));
	return MultiplicationOP;
}

wxButton* ButtonFactory::ButtonClear()
{
	wxButton* ButtonClear = new wxButton(buttonfac, 17, "C", wxPoint(165, 100), wxSize(75, 75));
	return ButtonClear;
}

wxButton* ButtonFactory::DivisoinOp()
{
	wxButton* DivisionOP = new wxButton(buttonfac, 18, "/", wxPoint(260, 100), wxSize(75, 75));
	return DivisionOP;
}

wxButton* ButtonFactory::Mod()
{
	wxButton* Mod = new wxButton(buttonfac, 19, "%", wxPoint(15, 100), wxSize(75, 75));
	return Mod;
}
