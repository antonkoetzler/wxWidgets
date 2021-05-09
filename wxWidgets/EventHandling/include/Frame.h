#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

private:
	wxBoxSizer* parentSizer;
	wxBoxSizer* dataGatherSizer;
};
