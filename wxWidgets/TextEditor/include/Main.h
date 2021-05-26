#pragma once

#include <wx/wx.h>
#include <wx/notebook.h>
#include "wxCustomTextCtrl.h"

class Main : public wxFrame
{
public:
	Main();

	// Instantiation Functions
	void NotebookConfig();
	void MenuBarConfig();

	// Event Functions
	void SaveFile(wxCommandEvent&);
	void Exit(wxCommandEvent&);

private:
	DECLARE_EVENT_TABLE()

	wxNotebook* typingArea;

	wxMenuBar* menubar;
		wxMenu* file;
};
