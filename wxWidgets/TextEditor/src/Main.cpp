#include "Main.h"

BEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_MENU(10001, Main::SaveFile)
	EVT_MENU(wxID_EXIT, Main::Exit)
END_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Text Editor", wxDefaultPosition, wxSize(400, 600))
{
	NotebookConfig();
	MenuBarConfig();
}

void Main::NotebookConfig()
{
	typingArea = new wxNotebook(this, wxID_ANY);

	typingArea->AddPage(new wxCustomTextCtrl(typingArea, wxID_ANY), "Tab 1", true);
}

void Main::MenuBarConfig()
{
	// Menu Bar Itself
	menubar = new wxMenuBar();

	// Configuring 'File'
	file = new wxMenu();

	// Configuring Save
	file->Append(
		new wxMenuItem(
			file,
			10001,
			"Save File\tCtrl+S"
		)
	);
	// Configuring Quit
	file->Append(
		new wxMenuItem(
			file,
			wxID_EXIT,
			"Exit\tCtrl+Q"
		)
	);

	// Adding 'File' to Menu Bar
	menubar->Append(file, "File");

	SetMenuBar(menubar);
}

void Main::SaveFile(wxCommandEvent&)
{
	wxCustomTextCtrl* endFile = (wxCustomTextCtrl*)typingArea->GetCurrentPage();

	endFile->SaveFile("../main.cpp", wxTEXT_TYPE_ANY);
}

void Main::Exit(wxCommandEvent&) { Close(true); }
