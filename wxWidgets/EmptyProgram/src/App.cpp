#include "App.h"

IMPLEMENT_APP(App);

bool App::OnInit()
{
	mainFrame = new Frame();
	mainFrame->Show();

	return true;
}
