#include "Frame.h"

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Event Handling in wxWidgets", wxPoint(200, 200), wxSize(1000, 1000))
{
	dataGatherSizer = new wxBoxSizer(wxHORIZONTAL);

	dataGatherSizer->Add(
		new wxTextCtrl(
			this,
			10001,
			wxEmptyString,
			wxDefaultPosition,
			wxSize(400, 100)
		),
		1,
		wxSHAPED | wxALIGN_CENTER_VERTICAL,
		15
	);

	SetSizer(dataGatherSizer);
}
