#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

public:
	wxButton* exitButton = nullptr;
	void OnExit(wxCommandEvent&);

	wxTextCtrl* textBox = nullptr;

	DECLARE_EVENT_TABLE()
};