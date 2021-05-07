#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	DECLARE_EVENT_TABLE()

	// Event Functions
	void bgWhite(wxCommandEvent&);
	void bgBlack(wxCommandEvent&);
	void bgRed(wxCommandEvent&);
	void bgBlue(wxCommandEvent&);
	void joke1(wxCommandEvent&);
	void joke2(wxCommandEvent&);
	void about(wxCommandEvent&);
	void authorInformation(wxCommandEvent&);

	// Box Sizer
	wxBoxSizer* bSizer1;
	wxBoxSizer* bSizer2;
	wxBoxSizer* bSizer3;
	wxBoxSizer* bSizer4;

	// Grid Sizer
	wxGridSizer* gSizer;
};
