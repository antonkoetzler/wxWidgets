#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(wxID_EXIT, Frame::OnExit)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Clean wxWidgets Code", wxPoint(30, 30), wxSize(800, 600))
{
	exitButton = new wxButton(
		this,
		wxID_EXIT,
		"qweqweqwe",
		wxPoint(10, 10),
		wxSize(150, 50)
	);

	textBox = new wxTextCtrl(
		this,
		wxID_ANY,
		"",
		wxPoint(10, 70),
		wxSize(300, 30)
	);
}

void Frame::OnExit(wxCommandEvent& event)
{
	Close(true);
}