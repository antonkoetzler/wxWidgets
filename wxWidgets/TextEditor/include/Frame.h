#pragma once

#include <wx/wx.h>
#include <wx/richtext/richtextctrl.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	DECLARE_EVENT_TABLE()

	// Menubar
	wxMenuBar* menubar;
		wxMenu* file;

	// Main Typing Window
	wxTextCtrl* typingWindow;

	// Event Functions
	void OnExit(wxCommandEvent&);
	void OnSave(wxCommandEvent&);

	// Child Windows
	wxFrame* preferences;
};
