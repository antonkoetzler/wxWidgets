#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(wxID_EXIT, Frame::onExit)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Controls & Containers", wxPoint(100, 100), wxSize(800, 600))
{
	panelOne = new wxPanel(
		this,
		wxID_ANY,
		wxPoint(20, 20),
		wxSize(150, 50)
	);

	exitButton = new wxButton(
		panelOne,
		wxID_EXIT,
		"Exit button",
		wxPoint(0, 0),
		wxSize(70, 20)
	);

	okayButton = new wxButton(
		panelOne,
		wxID_ANY,
		"Okay button",
		wxPoint(80, 30),
		wxSize(70, 20)
	);


	panelTwo = new wxPanel(
		this,
		wxID_ANY,
		wxPoint(550, 400),
		wxSize(200, 150)
	);

	emptyButtonOne = new wxButton(
		panelTwo,
		wxID_ANY,
		"emptyButtonOne",
		wxPoint(0, 0),
		wxSize(100, 50)
	);

	emptyButtonTwo = new wxButton(
		panelTwo,
		wxID_ANY,
		"emptyButtonTwo",
		wxPoint(100, 100),
		wxSize(100, 50)
	);
}

void Frame::onExit(wxCommandEvent& event)
{
	Close(true);
}
