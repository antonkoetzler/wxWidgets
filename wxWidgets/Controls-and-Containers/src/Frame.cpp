#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(wxID_OK, Frame::onExit)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Controls & Containers", wxPoint(100, 100), wxSize(800, 600))
{
	exitPanel = new wxPanel(
		this,
		wxID_ANY,
		wxPoint(200, 200),
		wxSize(150, 50)
	);

	exitButton = new wxButton(
		exitPanel,
		wxID_OK,
		"Okay button",
		wxPoint(20, 20)
	);
}

void Frame::onExit(wxCommandEvent& event)
{
	Close(true);
}
