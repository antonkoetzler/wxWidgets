#pragma once

#include <wx/wx.h>

class wxCustomTextCtrl : public wxTextCtrl
{
public:
	wxCustomTextCtrl(wxWindow* window, wxWindowID id) : wxTextCtrl(window, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_NO_VSCROLL)
	{
		wxFont font(
			10,
			wxFONTFAMILY_TELETYPE,
			wxFONTSTYLE_NORMAL,
			wxFONTWEIGHT_NORMAL,
			false
		);

		if (font.IsOk())
			SetFont(font);
	}
};
