#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_MENU(wxID_EXIT, Frame::OnExit)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Program with a Menubar", wxPoint(200, 200), wxSize(800, 800))
{
	fileMenu = new wxMenu();

	fileExit = new wxMenuItem(
		nullptr,
		wxID_EXIT,
		"Exit",
		"Closes the program",
		wxITEM_NORMAL,
		nullptr
	);

	fileMenu->Append(fileExit);


	menu = new wxMenuBar();

	menu->Append(fileMenu, "File");

	SetMenuBar(menu);
}

void Frame::OnExit(wxCommandEvent& event)
{
	Close(true);
}
