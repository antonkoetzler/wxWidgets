#include "Main.h"

BEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_MENU(wxID_EXIT, Main::OnExit)
END_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Text Editor", wxPoint(150, 150), wxSize(600, 800))
{
	// Instantiation of Our Typing Window
	typingWindow = new wxRichTextCtrl(
		this,
		wxID_ANY,
		wxEmptyString,
		wxDefaultPosition,
		wxDefaultSize,
		wxRE_MULTILINE
	);

	// Sets Background Colour
	typingWindow->SetBackgroundColour(wxColour(255, 230, 232));

	// Font
	SetDefaultFont();

	// Menubar
	ConfigureMenuBar();

	SetMenuBar(menubar);

	// Assert Changes
	Refresh();
}

void Main::SetDefaultFont()
{
	wxFont font(
		12,
		wxFONTFAMILY_TELETYPE,
		wxFONTSTYLE_NORMAL,
		wxFONTWEIGHT_NORMAL,
		false
	);

	if (font.IsOk())
		typingWindow->BeginFont(font);
}

void Main::ConfigureMenuBar()
{
	menubar = new wxMenuBar();

	file = new wxMenu();
	file->Append(
		new wxMenuItem(
			file,
			wxID_EXIT,
			"Exit\tCtrl+Q",
			wxEmptyString,
			wxITEM_NORMAL,
			nullptr
		)
	);

	menubar->Append(file, "File");
}

void Main::OnExit(wxCommandEvent&)
{
	Close(true);
}
