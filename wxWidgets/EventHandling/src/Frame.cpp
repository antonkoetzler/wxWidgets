#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(10001, Frame::setName)
	EVT_BUTTON(10002, Frame::setEmail)
	EVT_BUTTON(10003, Frame::setPhone)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Event Handling in wxWidgets", wxPoint(100, 100), wxDefaultSize)
{
	contactInfoSizer = new wxBoxSizer(wxVERTICAL);
	//
	userName = new wxStaticText(
		this,
		wxID_ANY,
		"Anton Koetzler-Faust",
		wxDefaultPosition,
		wxDefaultSize,
		wxALIGN_CENTER
	);
	contactInfoSizer->Add(
		userName,
		1,
		wxALIGN_CENTER
	);
	//
	userEmail = new wxStaticText(
		this,
		wxID_ANY,
		"antonkoetzler-faust@hotmail.com",
		wxDefaultPosition,
		wxDefaultSize,
		wxALIGN_CENTER
	);
	contactInfoSizer->Add(
		userEmail,
		1,
		wxALIGN_CENTER
	);
	//
	userPhone = new wxStaticText(
		this,
		wxID_ANY,
		"(403) 708-8087",
		wxDefaultPosition,
		wxDefaultSize,
		wxALIGN_CENTER
	);
	contactInfoSizer->Add(
		userPhone,
		1,
		wxALIGN_CENTER
	);
	//

	infoGatherSizer = new wxGridSizer(3, 2, 1, 1);
	//
	infoGatherSizer->Add(
		new wxButton(
			this,
			10001,
			"Set Full Name",
			wxDefaultPosition,
			wxDefaultSize
		),
		1,
		wxEXPAND | wxALL
	);
	getName = new wxTextCtrl(
			this,
			wxID_ANY,
			wxEmptyString,
			wxDefaultPosition,
			wxSize(300, 50)
	);
	infoGatherSizer->Add(
		getName,
		1,
		wxEXPAND | wxALL
	);
	//
	infoGatherSizer->Add(
		new wxButton(
			this,
			10002,
			"Set Email",
			wxDefaultPosition,
			wxDefaultSize
		),
		1,
		wxEXPAND | wxALL
	);
	getEmail = new wxTextCtrl(
			this,
			wxID_ANY,
			wxEmptyString,
			wxDefaultPosition,
			wxDefaultSize
	);
	infoGatherSizer->Add(
		getEmail,
		1,
		wxEXPAND | wxALL
	);
	//
	infoGatherSizer->Add(
		new wxButton(
			this,
			10003,
			"Set Phone Number",
			wxDefaultPosition,
			wxDefaultSize
		),
		1,
		wxEXPAND | wxALL
	);
	getPhone = new wxTextCtrl(
			this,
			wxID_ANY,
			wxEmptyString,
			wxDefaultPosition,
			wxDefaultSize
	);
	infoGatherSizer->Add(
		getPhone,
		1,
		wxEXPAND | wxALL
	);
	//

	masterSizer = new wxBoxSizer(wxVERTICAL);
	//
	masterSizer->Add(
		contactInfoSizer,
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER,
		50
	);
	//
	masterSizer->Add(
		infoGatherSizer,
		0,
		wxFIXED_MINSIZE | wxALIGN_CENTER
	);
	//

	SetSizerAndFit(masterSizer);
}

void Frame::setName(wxCommandEvent& event)
{
	if (getName->GetLineText(0) != wxEmptyString)
		userName->SetLabel(getName->GetLineText(0));
}

void Frame::setEmail(wxCommandEvent& event)
{
	if (getEmail->GetLineText(0) != wxEmptyString)
		userEmail->SetLabel(getEmail->GetLineText(0));
}

void Frame::setPhone(wxCommandEvent& event)
{
	if (getPhone->GetLineText(0) != wxEmptyString)
		userPhone->SetLabel(getPhone->GetLineText(0));
}
