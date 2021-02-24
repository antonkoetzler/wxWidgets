#include <wx/wx.h>
#include "Buttons.h"

IMPLEMENT_APP(App)

bool App::OnInit() 
{
	Frame *window = new Frame(
		wxT("Hello World!"),
		wxPoint(10, 10),
		wxSize(800, 800)
	);

	window->Show(true);

	return true;
} 

Frame::Frame(const wxString& title, const wxPoint& pos, const wxSize& size) 
: wxFrame(nullptr, wxID_ANY, title, pos, size) 
{
}
