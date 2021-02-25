#include <wx/wx.h>
#include "Buttons.h"

IMPLEMENT_APP(App)

////
BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_BUTTON(wxID_EXIT, Frame::OnExit)
END_EVENT_TABLE()
////

bool App::OnInit() 
{
	Frame *window = new Frame(
		wxT("Hello World!"),
		wxPoint(10, 10),
		wxSize(1200, 1000)
	);

	window->Show(true);

	return true;
} 

Frame::Frame(const wxString& title, const wxPoint& pos, const wxSize& size) 
: wxFrame(nullptr, wxID_ANY, title, pos, size) 
{
	////
	exitButton = new wxButton(
		this,
		wxID_EXIT,
		wxT("Exit Button"),
		wxDefaultPosition,
		wxSize(10, 5),
		0
	);
	////
}

////
void Frame::OnExit(wxCommandEvent& event)
{
	Close(true);
}
////