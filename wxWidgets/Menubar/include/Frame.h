#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	DECLARE_EVENT_TABLE()

	// Menubar
	wxMenuBar* menu;

	// Menu
	wxMenu* fileMenu;
	// fileMenu Menu Items
	wxMenuItem* fileExit;
		void OnExit(wxCommandEvent&);
};
