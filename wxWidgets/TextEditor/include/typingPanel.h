#pragma once

#include <wx/wx.h>
#include <wx/richtext/richtextctrl.h>

class typingPanel : public wxTextCtrl
{
public:
	typingPanel(wxWindow* parent) : wxTextCtrl(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_NO_VSCROLL)
	{
		this->SetBackgroundColour(wxColour(255, 185, 175));

		wxFont font(
			12,
			wxFONTFAMILY_TELETYPE,
			wxFONTSTYLE_NORMAL,
			wxFONTWEIGHT_NORMAL,
			false
		);

		this->SetFont(font);
	}
};
