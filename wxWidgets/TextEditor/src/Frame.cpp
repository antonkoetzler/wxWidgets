#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
	EVT_MENU(wxID_EXIT, Frame::OnQuit)
	EVT_MENU(10001, Frame::NewFile)
	EVT_MENU(10002, Frame::SaveFile)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Text Editor", wxPoint(100, 100), wxSize(600, 800))
{
	SetMainScreen();

	SetMenBar();

	SetMenuBar(menubar);
}

void Frame::SetMenBar()
{
	file = new wxMenu();

	file->Append(
		new wxMenuItem(
			file,
			10001,
			"New File\tCtrl+N",
			wxEmptyString,
			wxITEM_NORMAL
		)
	);

	file->Append(
		new wxMenuItem(
			file,
			10002,
			"Save File\tCtrl+S",
			wxEmptyString,
			wxITEM_NORMAL
		)
	);

	file->Append(
		new wxMenuItem(
			file,
			wxID_EXIT,
			"Quit\tCtrl+Q",
			wxEmptyString,
			wxITEM_NORMAL
		)
	);

	menubar = new wxMenuBar();
	menubar->Append(file, "File");
}

void Frame::SetMainScreen()
{
	splitter = new wxSplitterWindow(this);


	fileList = new wxPanel(splitter);
	fileList->SetBackgroundColour(wxColour(255, 190, 168));

	title = new wxRichTextCtrl(
		fileList,
		wxID_ANY,
		wxEmptyString,
		wxDefaultPosition,
		wxSize(200, 30)
	);
	title->SetBackgroundColour(wxColour(168, 255, 235));

	title->BeginAlignment(wxTEXT_ALIGNMENT_CENTER);
			title->WriteText("Directory List");
			title->Newline();
	title->EndAlignment();

	title->SetEditable(false);
	title->GetCaret()->Show(false);


	typingArea = new wxNotebook(
		splitter,
		wxID_ANY,
		wxDefaultPosition,
		wxDefaultSize,
		wxNB_TOP | wxNB_FIXEDWIDTH
	);
	typingArea->AddPage(new typingPanel(typingArea), "new", true);


	fileList->SetMinSize(wxSize(200, 800));
	typingArea->SetMinSize(wxSize(400, 800));

	splitter->SplitVertically(fileList, typingArea);
}

void Frame::OnQuit(wxCommandEvent&) { Close(true); }

void Frame::NewFile(wxCommandEvent&)
{
	typingArea->AddPage(new typingPanel(typingArea), "new", true);
}

void Frame::SaveFile(wxCommandEvent&)
{
	
}
