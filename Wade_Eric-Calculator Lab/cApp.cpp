#include "cApp.h"

wxIMPLEMENT_APP(cApp);


bool cApp::OnInit() {
	window = new cWindow();
	window->Show();
	return true;
}