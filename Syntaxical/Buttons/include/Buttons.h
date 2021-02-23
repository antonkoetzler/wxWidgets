#pragma once

#include <wx/wx.h>

class MainApp : public wxApp {
 public:
	 virtual bool OnInit();
};

class MainFrame : public wxFrame {
 public:
	 MainFrame(wxString &title, wxPoint &coord, wxSize &size);
};

