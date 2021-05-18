// Main Window

#pragma ocne

#include <wx/wx.h>
#include <wx/richtext/richtextctrl.h>

class Main : public wxFrame
{
public:
	Main();

private:
	wxRichTextCtrl* typingWindow;
};
