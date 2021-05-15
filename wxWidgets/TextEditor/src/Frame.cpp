#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_MENU(10001, Frame::OnSave)
	EVT_MENU(wxID_EXIT, Frame::OnExit)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "MyoroEditor", wxPoint(100, 50), wxSize(800, 1000))
{
	// Install all handlers
	wxInitAllImageHandlers();

	// Configures icon
	wxIcon icon("../pictures/icon.png", wxBITMAP_TYPE_PNG, -1, -1);

	if (icon.IsOk())
		SetIcons(icon);

	// Configures menubar and it's items
	menubar = new wxMenuBar();

	file = new wxMenu();
	file->Append(
		new wxMenuItem(
			file,
			10001,
			"Save\tCtrl+S",
			wxEmptyString,
			wxITEM_NORMAL,
			nullptr
		)
	);
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

	// Configures the window in which you type within
	typingWindow = new wxTextCtrl(
		this,
		wxID_ANY,
		wxEmptyString,
		wxDefaultPosition,
		wxSize(800, 1000),
		wxTE_MULTILINE
	);

	typingWindow->SetBackgroundColour(wxColour(228, 253, 207));

	SetMenuBar(menubar);
}

void Frame::OnExit(wxCommandEvent&)
{
	Close(true);
}

void Frame::OnSave(wxCommandEvent&)
{
	if (typingWindow->SaveFile("../text.txt"))
		std::cout << "Successful" << std::endl;
}
