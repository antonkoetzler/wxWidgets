#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	DECLARE_EVENT_TABLE()

	wxBoxSizer* masterSizer;

	// Contact Information Sizer
	wxBoxSizer* contactInfoSizer;
	wxStaticText* userName;
		void setName(wxCommandEvent&);
	wxStaticText* userEmail;
		void setEmail(wxCommandEvent&);
	wxStaticText* userPhone;
		void setPhone(wxCommandEvent&);

	// Information Gather Sizer
	wxGridSizer* infoGatherSizer;
	wxTextCtrl* getName;
	wxTextCtrl* getEmail;
	wxTextCtrl* getPhone;
};
