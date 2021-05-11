#pragma once

#include <wx/wx.h>

class Frame : public wxFrame
{
public:
	Frame();

	void loadImages();

private:
	DECLARE_EVENT_TABLE()

	wxStaticBitmap* imageHolder1 = nullptr; // Where the image (bitmap) will be placed
	wxStaticBitmap* imageHolder2 = nullptr;
	wxStaticBitmap* imageHolder3 = nullptr;
	wxStaticBitmap* imageHolder4 = nullptr;
	wxBitmap image; // The image

	wxGridSizer* gSizer;
};
