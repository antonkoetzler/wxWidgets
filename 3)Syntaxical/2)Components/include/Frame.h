#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

public:
	wxButton* exitButton;
	void OnExit(wxCommandEvent&);

	wxTextCtrl* textBox;

	DECLARE_EVENT_TABLE()
};