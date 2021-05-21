#pragma once

#include <wx/wx.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/notebook.h>
#include <wx/splitter.h>
#include "typingPanel.h"

class Frame : public wxFrame
{
public:
	Frame();

	// Configuratory Functions
	void SetMainScreen();
	void SetMenBar();

	// Event Functions
	void OnQuit(wxCommandEvent&);
	void NewFile(wxCommandEvent&);
	void SaveFile(wxCommandEvent&);

private:
	DECLARE_EVENT_TABLE()

	wxSplitterWindow* splitter;
		wxPanel* fileList;
				wxRichTextCtrl* title;
		wxNotebook* typingArea;

	wxMenuBar* menubar;
		wxMenu* file;
};
