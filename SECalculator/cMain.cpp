#include "cMain.h"
wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(1, cMain::OnButtonClicked)
EVT_BUTTON(2, cMain::OnButtonClicked)
EVT_BUTTON(3, cMain::OnButtonClicked)
EVT_BUTTON(4, cMain::OnButtonClicked)
EVT_BUTTON(5, cMain::OnButtonClicked)
EVT_BUTTON(6, cMain::OnButtonClicked)
EVT_BUTTON(7, cMain::OnButtonClicked)
EVT_BUTTON(8, cMain::OnButtonClicked)
EVT_BUTTON(9, cMain::OnButtonClicked)
EVT_BUTTON(10, cMain::OnButtonClicked)
EVT_BUTTON(11, cMain::OnButtonClicked)
EVT_BUTTON(12, cMain::OnButtonClicked)
EVT_BUTTON(13, cMain::OnButtonClicked)
EVT_BUTTON(14, cMain::OnButtonClicked)
EVT_BUTTON(15, cMain::OnButtonClicked)
EVT_BUTTON(16, cMain::OnButtonClicked)
EVT_BUTTON(17, cMain::OnButtonClicked)
EVT_BUTTON(18, cMain::OnButtonClicked)
EVT_BUTTON(19, cMain::OnButtonClicked)
EVT_BUTTON(20, cMain::OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, 10000, "Calculator Application - Stratos", wxPoint(30,30), wxSize(400,600))
{
	//Create Buttons inside application
	m_Text1 = new wxTextCtrl(this, 20, "", wxPoint(15, 20), wxSize(350, 70));
	Neg = new wxButton(this, 1, "-", wxPoint(15, 400), wxSize(75, 75));
	Button0 = new wxButton(this, 2, "0", wxPoint(90, 400), wxSize(75, 75));
	Dot = new wxButton(this, 3, ".", wxPoint(165, 400), wxSize(75, 75));
	Submit = new wxButton(this, 4, "=", wxPoint(260, 400), wxSize(75, 75));
	Button1 = new wxButton(this, 5, "1", wxPoint(15, 325), wxSize(75, 75));
	Button2 = new wxButton(this, 6, "2", wxPoint(90, 325), wxSize(75, 75));
	Button3 = new wxButton(this, 7, "3", wxPoint(165, 325), wxSize(75, 75));
	AdditionOp = new wxButton(this, 8, "+", wxPoint(260, 325), wxSize(75, 75));
	Button4 = new wxButton(this, 9, "4", wxPoint(15, 250), wxSize(75, 75));
	Button5 = new wxButton(this, 10, "5", wxPoint(90, 250), wxSize(75, 75));
	Button6 = new wxButton(this, 11, "6", wxPoint(165, 250), wxSize(75, 75));
	SubtractionOp = new wxButton(this, 12, "-", wxPoint(260, 250), wxSize(75, 75));
	Button7 = new wxButton(this, 13, "7",wxPoint(15, 175), wxSize(75, 75));
	Button8 = new wxButton(this, 14, "8", wxPoint(90, 175), wxSize(75, 75));
	Button9 = new wxButton(this, 15, "9", wxPoint(165, 175), wxSize(75, 75));
	MultiplicationOP = new wxButton(this, 16, "x", wxPoint(260, 175), wxSize(75, 75));
	ButtonClear = new wxButton(this, 17, "C", wxPoint(165, 100), wxSize(75, 75));
	DivisionOP = new wxButton(this, 18, "/", wxPoint(260, 100), wxSize(75, 75));
	Mod = new wxButton(this, 19, "%", wxPoint(15, 100), wxSize(75, 75));

	//Neg->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
}

cMain::~cMain()
{

} 

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	int id = evt.GetId();
	
	m_Text1->AppendText(this->FindItem(id)->GetLabel());
	if (id == 17)
	{
		m_Text1->Clear();
	}


	//OTHER METHODS
	//evt.GetEventObject();
	//returns buttons;

	//m_Text1->AppendText(Button1->GetLabel());
	//evt.GetEventObject
	/*(switch (id)
	{
	case 1:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 2:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 3:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 4:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 5:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 6:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 7:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 8:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 9:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 10:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	case 11:
	{
		m_Text1->AppendText(Button1->GetLabel());
		break;
	}
	}*/
}