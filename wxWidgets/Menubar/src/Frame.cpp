#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_MENU(wxID_EXIT, Frame::OnExit)
	EVT_MENU(10001, Frame::OnClickMe)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Program with a Menubar", wxPoint(200, 200), wxSize(800, 800))
{
	// Configuring Menu Bar "File"
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

	// Configuring Menu Bar "Dialog"
	dialogMenu = new wxMenu();
	dialogClickMe = new wxMenuItem(
		nullptr,
		10001,
		"Click Me!",
		"Shows a message box",
		wxITEM_NORMAL,
		nullptr
	);
	dialogMenu->Append(dialogClickMe);

	// Configuring the Menu Bar
	menu = new wxMenuBar();
	menu->Append(fileMenu, "File");
	menu->Append(dialogMenu, "Dialog");
	SetMenuBar(menu);

	// Setting the Background Colour
	colour = new wxPanel(
		this,
		wxID_ANY,
		wxDefaultPosition,
		wxDefaultSize
	);
	colour->SetBackgroundColour(*wxWHITE);

	// Setting the Text
	text = new wxStaticText(
		colour,
		-1,
		"Menubars in wxWidgets",
		wxPoint(250, 250),
		wxSize(400, 100)
	);
}

void Frame::OnExit(wxCommandEvent& event)
{
	Close(true);
}

void Frame::OnClickMe(wxCommandEvent& event)
{
	wxMessageDialog* ClickMeDialog = new wxMessageDialog(
		nullptr,
		"You've clicked a menu item!",
		"Click Me Window",
		wxOK,
		wxDefaultPosition
	);

	ClickMeDialog->ShowModal();

	delete ClickMeDialog;
}
