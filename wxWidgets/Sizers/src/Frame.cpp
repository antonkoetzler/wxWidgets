#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(10001, Frame::bgWhite)
	EVT_BUTTON(10002, Frame::bgBlack)
	EVT_BUTTON(10003, Frame::bgRed)
	EVT_BUTTON(10004, Frame::bgBlue)
	EVT_BUTTON(10005, Frame::joke1)
	EVT_BUTTON(10006, Frame::joke2)
	EVT_BUTTON(10007, Frame::about)
	EVT_BUTTON(10008, Frame::authorInformation)
END_EVENT_TABLE()
	

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Introduction to Sizers", wxPoint(300, 300), wxSize(800, 800))
{
	SetBackgroundColour(*wxLIGHT_GREY);

	// Configuring bSizer1
	bSizer1 = new wxBoxSizer(wxVERTICAL);
	bSizer1->Add(
		new wxButton(
			this,
			10001,
			"CHANGE BACKGROUND TO WHITE",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);
	bSizer1->Add(
		new wxButton(
			this,
			10002,
			"CHANGE BACKGROUND TO BLACK",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);

	// Configuring bSizer2
	bSizer2 = new wxBoxSizer(wxVERTICAL);
	bSizer2->Add(
		new wxButton(
			this,
			10005,
			"TELL A JOKE",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);
	bSizer2->Add(
		new wxButton(
			this,
			10006,
			"TELL ANOTHER JOKE",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);

	// Configuring bSizer3
	bSizer3 = new wxBoxSizer(wxVERTICAL);
	bSizer3->Add(
		new wxButton(
			this,
			10003,
			"CHANGE BACKGROUND TO RED",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);
	bSizer3->Add(
		new wxButton(
			this,
			10004,
			"CHANGE BACKGROUND TO BLUE",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);

	// Configuring bSizer4
	bSizer4 = new wxBoxSizer(wxVERTICAL);
	bSizer4->Add(
		new wxButton(
			this,
			10007,
			"ABOUT",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);
	bSizer4->Add(
		new wxButton(
			this,
			10008,
			"AUTHOR INFORMATION",
			wxDefaultPosition,
			wxSize(400, 100)
		),
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		10
	);



	// Configuring Our Grid Sizer
	gSizer = new wxGridSizer(2, 2, 1, 1);
	gSizer->Add(
		bSizer1,
		0,
		wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL
	);
	gSizer->Add(
		bSizer2,
		0,
		wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL
	);
	gSizer->Add(
		bSizer3,
		0,
		wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL
	);
	gSizer->Add(
		bSizer4,
		0,
		wxALIGN_CENTER_HORIZONTAL | wxALIGN_CENTER_VERTICAL
	);

	SetSizer(gSizer);
}

void Frame::bgWhite(wxCommandEvent& evt)
{
	SetBackgroundColour(*wxWHITE);
	Refresh();
}

void Frame::bgBlack(wxCommandEvent& evt)
{
	SetBackgroundColour(*wxBLACK);
	Refresh();
}

void Frame::bgRed(wxCommandEvent& evt)
{
	SetBackgroundColour(*wxRED);
	Refresh();
}

void Frame::bgBlue(wxCommandEvent& evt)
{
	SetBackgroundColour(*wxBLUE);
	Refresh();
}

void Frame::joke1(wxCommandEvent& evt)
{
	wxMessageDialog* joke = new wxMessageDialog(
		this,
		"What do you call a X that just got out of the shower? \n\nA kleenex!",
		"Joke #1",
		wxOK | wxCENTER,
		wxDefaultPosition
	);

	joke->ShowModal();

	delete joke;
}

void Frame::joke2(wxCommandEvent& evt)
{
	wxMessageDialog* joke = new wxMessageDialog(
		this,
		"What do you call a frog with no legs?\n\nUnhoppy!",
		"Joke #2",
		wxOK | wxCENTER,
		wxDefaultPosition
	);

	joke->ShowModal();

	delete joke;
}

void Frame::about(wxCommandEvent& evt)
{
	wxMessageDialog* about = new wxMessageDialog(
		this,
		"Introduction and illustration of how sizers work in wxWidgets.\n The main sizer classes wxBoxSizer and wxGridSizer are covered",
		"About",
		wxOK | wxCENTER,
		wxDefaultPosition
	);

	about->ShowModal();

	delete about;
}

void Frame::authorInformation(wxCommandEvent& evt)
{
	wxMessageDialog* authorInformation = new wxMessageDialog(
		this,
		"Name: Anton Koetzler-Faust\n Email: antonkoetzler-faust@hotmail.com",
		"Author Information",
		wxOK | wxCENTER,
		wxDefaultPosition
	);

	authorInformation->ShowModal();

	delete authorInformation;
}
