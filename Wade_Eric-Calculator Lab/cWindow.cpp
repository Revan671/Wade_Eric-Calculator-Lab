#include "cWindow.h"

cWindow::cWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400,200), wxSize(500,500))
{
	button7 = new wxButton(this, 107, "7", wxPoint(10, 60), wxSize(70, 50));
	button8 = new wxButton(this, 108, "8", wxPoint(80, 60), wxSize(70, 50));
	button9 = new wxButton(this, 109, "9", wxPoint(150, 60), wxSize(70, 50));
	button4 = new wxButton(this, 104, "4", wxPoint(10, 110), wxSize(70, 50));
	button5 = new wxButton(this, 105, "5", wxPoint(80, 110), wxSize(70, 50));
	button6 = new wxButton(this, 106, "6", wxPoint(150, 110), wxSize(70, 50));
	button1 = new wxButton(this, 107, "1", wxPoint(10, 160), wxSize(70, 50));
	button2 = new wxButton(this, 108, "2", wxPoint(80, 160), wxSize(70, 50));
	button3 = new wxButton(this, 109, "3", wxPoint(150, 160), wxSize(70, 50));
	button20 = new wxButton(this, 120, "+/-", wxPoint(10, 210), wxSize(70, 50));
	button0 = new wxButton(this, 100, "0", wxPoint(80, 210), wxSize(70, 50));
	button19 = new wxButton(this, 119, "DEC", wxPoint(150, 210), wxSize(70, 50));


}

cWindow::~cWindow() {

}
