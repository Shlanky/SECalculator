#include "cMain.h"
#include "ButtonFactory.h";
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
	
	ButtonFactory ccMain = ButtonFactory(this);

	m_Text1 = new wxTextCtrl(this, 20, "", wxPoint(15, 20), wxSize(350, 70));
	Neg = ccMain.Neg();
	Button0 = ccMain.Button0();
	Dot = ccMain.Dot();
	Submit = ccMain.Submit();
	Button1 = ccMain.Button1();
	Button2 = ccMain.Button2();
	Button3 = ccMain.Button3();
	AdditionOp = ccMain.AdditionOp();
	Button4 = ccMain.Button4();
	Button5 = ccMain.Button5();
	Button6 = ccMain.Button6();
	SubtractionOp = ccMain.SubtractionOp();
	Button7 = ccMain.Button7();
	Button8 = ccMain.Button8();
	Button9 = ccMain.Button9();
	MultiplicationOP = ccMain.MultiplicationOP();
	ButtonClear = ccMain.ButtonClear();
	DivisionOP = ccMain.DivisoinOp();
	Mod = ccMain.Mod();
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