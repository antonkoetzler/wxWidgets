#pragma once

class App: public wxApp
{
public:
	virtual bool OnInit(); 
};

class Frame: public wxFrame
{ 
public: 
	Frame(const wxString &title, const wxPoint &pos, const wxSize &size); 
}; 

DECLARE_APP(App)
