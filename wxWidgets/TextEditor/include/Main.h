// Main Window

#pragma ocne

#include <wx/wx.h>
#include <wx/richtext/richtextctrl.h>

class Main : public wxFrame
{
public:
	Main();

	// Helpful Functions
	void SetDefaultFont();
	void ConfigureMenuBar();

	// Events
	void OnExit(wxCommandEvent&);

private:
	DECLARE_EVENT_TABLE()


	wxRichTextCtrl* typingWindow;

	// Menu
	wxMenuBar* menubar;
	wxMenu* file;
};
