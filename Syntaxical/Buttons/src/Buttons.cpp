#include <wx/wx.h>
#include "Buttons.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
	MainFrame *MainWindow = new MainFrame(
			_T("Buttons Boy"),
			wxPoint(1, 1),
			wxSize(800, 800));

	MainWindow->Show(true);
	SetTopWindow(MainWindow);

	return true;
}

MainFrame::MainFrame(wxString &title, const wxPoint &coord, const wxSize &size) 
	: wxFrame(null, -1, title, coord, size) {
}

