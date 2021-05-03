#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	DECLARE_EVENT_TABLE()

	wxPanel* exitPanel;
	wxButton* exitButton;
	void onExit(wxCommandEvent&);
};
