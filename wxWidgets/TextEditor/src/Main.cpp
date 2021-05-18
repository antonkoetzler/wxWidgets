#include "Main.h"

Main::Main() : wxFrame(nullptr, wxID_ANY, "Text Editor", wxPoint(150, 150), wxSize(600, 800))
{
	typingWindow = new wxRichTextCtrl(
		this,
		wxID_ANY,
		wxEmptyString,
		wxDefaultPosition,
		wxSize(600, 800)
	);
}
