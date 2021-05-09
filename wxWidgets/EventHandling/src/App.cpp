#include "App.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	window = new Frame;
	window->Show();

	return true;
}
