#pragma once
#include "wx/wx.h"
class cMain : public wxFrame
{
public:
	cMain();
	wxDECLARE_EVENT_TABLE();
	~cMain();
	wxButton* Button0 = nullptr;	// Creates a button.
	wxTextCtrl* m_Text1 = nullptr;	// Creates an empty TextBox
	//wxListBox* m_List1 = nullptr;	// Creates an empty List

	wxButton* Neg = nullptr;
	wxButton* Zed = nullptr;
	wxButton* Dot = nullptr;
	wxButton* Submit = nullptr;
	wxButton* Button1 = nullptr;
	wxButton* Button2 = nullptr;
	wxButton* Button3 = nullptr;
	wxButton* AdditionOp = nullptr;
	wxButton* Button4 = nullptr;
	wxButton* Button5 = nullptr;
	wxButton* Button6 = nullptr;
	wxButton* SubtractionOp = nullptr;
	wxButton* Button7 = nullptr;
	wxButton* Button8 = nullptr;
	wxButton* Button9 = nullptr;
	wxButton* MultiplicationOP = nullptr;
	wxButton* ButtonClear = nullptr;
	wxButton* DivisionOP = nullptr;
	wxButton* Mod = nullptr;
	

	//Allows us to create events for buttons
	void OnButtonClicked(wxCommandEvent& evt);
};

//AppendText
