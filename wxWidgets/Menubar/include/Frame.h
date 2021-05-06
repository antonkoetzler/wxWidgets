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

	// File Menu and it's Items
	wxMenu* fileMenu;
	wxMenuItem* fileExit;
		void OnExit(wxCommandEvent&);

	// Dialog Menu
	wxMenu* dialogMenu;
	wxMenuItem* dialogClickMe;
		void OnClickMe(wxCommandEvent&);

	// Panel to Change the Background Colour
	wxPanel* colour;

	// Main Text in the Program
	wxStaticText* text;
};
