#include "cMain.h"



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Calculator Application - Stratos", wxPoint(30,30), wxSize(400,600))
{
	m_Text1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(15, 20), wxSize(350, 70));
	Neg = new wxButton(this, wxID_ANY, "+/-", wxPoint(15, 400), wxSize(75, 75));
	Button0 = new wxButton(this, wxID_ANY, "0", wxPoint(90, 400), wxSize(75, 75));
	Dot = new wxButton(this, wxID_ANY, ".", wxPoint(165, 400), wxSize(75, 75));
	Submit = new wxButton(this, wxID_ANY, "=", wxPoint(260, 400), wxSize(75, 75));
	Button1 = new wxButton(this, wxID_ANY, "1", wxPoint(15, 325), wxSize(75, 75));
	Button2 = new wxButton(this, wxID_ANY, "2", wxPoint(90, 325), wxSize(75, 75));
	Button3 = new wxButton(this, wxID_ANY, "3", wxPoint(165, 325), wxSize(75, 75));
	AdditionOp = new wxButton(this, wxID_ANY, "+", wxPoint(260, 325), wxSize(75, 75));
	Button4 = new wxButton(this, wxID_ANY, "4", wxPoint(15, 250), wxSize(75, 75));
	Button5 = new wxButton(this, wxID_ANY, "5", wxPoint(90, 250), wxSize(75, 75));
	Button6 = new wxButton(this, wxID_ANY, "6", wxPoint(165, 250), wxSize(75, 75));
	SubtractionOp = new wxButton(this, wxID_ANY, "-", wxPoint(260, 250), wxSize(75, 75));
	Button7 = new wxButton(this, wxID_ANY, "7",wxPoint(15, 175), wxSize(75, 75));
	Button8 = new wxButton(this, wxID_ANY, "8", wxPoint(90, 175), wxSize(75, 75));
	Button9 = new wxButton(this, wxID_ANY, "9", wxPoint(165, 175), wxSize(75, 75));
	MultiplicationOP = new wxButton(this, wxID_ANY, "x", wxPoint(260, 175), wxSize(75, 75));
	ButtonClear = new wxButton(this, wxID_ANY, "C", wxPoint(165, 100), wxSize(75, 75));
	DivisionOP = new wxButton(this, wxID_ANY, "/", wxPoint(260, 100), wxSize(75, 75));
	Mod = new wxButton(this, wxID_ANY, "%", wxPoint(15, 100), wxSize(75, 75));

}

cMain::~cMain()
{

}
