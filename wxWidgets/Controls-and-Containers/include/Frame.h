#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	DECLARE_EVENT_TABLE()

	wxPanel* panelOne;
	wxPanel* panelTwo;

	wxButton* exitButton;
	void onExit(wxCommandEvent&);
	wxButton* okayButton;
	wxButton* emptyButtonOne;
	wxButton* emptyButtonTwo;
};
