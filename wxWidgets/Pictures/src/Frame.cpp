#include "Frame.h"

BEGIN_EVENT_TABLE(Frame, wxFrame)
END_EVENT_TABLE()

Frame::Frame() : wxFrame(nullptr, wxID_ANY, "Adding Pictures in wxWidgets", wxDefaultPosition, wxDefaultSize)
{
	wxInitAllImageHandlers();

	Center();

	// Setting the Icon
	wxIcon icon("../pictures/icon.ico", wxBITMAP_TYPE_ICO);

	if (icon.IsOk()) // Asserting icon bitmap before setting the icon
		SetIcon(icon);

	gSizer = new wxGridSizer(2, 2, 2, 2);

	loadImages();

	if (imageHolder1)
		gSizer->Add(
			imageHolder1,
			1,
			wxALIGN_CENTER
		);
	if (imageHolder2)
		gSizer->Add(
			imageHolder2,
			1,
			wxALIGN_CENTER
		);
	if (imageHolder3)
		gSizer->Add(
			imageHolder3,
			1,
			wxALIGN_CENTER
		);
	if (imageHolder4)
		gSizer->Add(
			imageHolder4,
			1,
			wxALIGN_CENTER
		);

	SetSizerAndFit(gSizer);
}

void Frame::loadImages()
{
	image.LoadFile("../pictures/bigyoshi.png", wxBITMAP_TYPE_PNG);
	if (image.IsOk()) // Asserting the image was processed
		imageHolder1 = new wxStaticBitmap(
			this,
			wxID_ANY,
			image
		);

	image.LoadFile("../pictures/android.jpg", wxBITMAP_TYPE_JPEG);
	if (image.IsOk())
		imageHolder2 = new wxStaticBitmap(
			this,
			wxID_ANY,
			image
		);

	image.LoadFile("../pictures/bisto.jpg", wxBITMAP_TYPE_JPEG);
	if (image.IsOk())
		imageHolder3 = new wxStaticBitmap(
			this,
			wxID_ANY,
			image
		);

	image.LoadFile("../pictures/funnydog.png", wxBITMAP_TYPE_PNG);
	if (image.IsOk())
		imageHolder4 = new wxStaticBitmap(
			this,
			wxID_ANY,
			image
		);
}
