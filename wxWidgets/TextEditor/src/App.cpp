#include "App.h"

IMPLEMENT_APP(App);

bool App::OnInit()
{
	mainWindow = new Main(); mainWindow->Show();

	return true;
}