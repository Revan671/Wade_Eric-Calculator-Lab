#include "cWindow.h"

cWindow::cWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400,200), wxSize(385,385))
{
	//numpad
	button7 = new wxButton(this, 107, "7", wxPoint(10, 130), wxSize(70, 50));
	button8 = new wxButton(this, 108, "8", wxPoint(80, 130), wxSize(70, 50));
	button9 = new wxButton(this, 109, "9", wxPoint(150, 130), wxSize(70, 50));
	button4 = new wxButton(this, 104, "4", wxPoint(10, 180), wxSize(70, 50));
	button5 = new wxButton(this, 105, "5", wxPoint(80, 180), wxSize(70, 50));
	button6 = new wxButton(this, 106, "6", wxPoint(150, 180), wxSize(70, 50));
	button1 = new wxButton(this, 107, "1", wxPoint(10, 230), wxSize(70, 50));
	button2 = new wxButton(this, 108, "2", wxPoint(80, 230), wxSize(70, 50));
	button3 = new wxButton(this, 109, "3", wxPoint(150, 230), wxSize(70, 50));
	button0 = new wxButton(this, 100, "0", wxPoint(80, 280), wxSize(70, 50));
	//controls
	button20 = new wxButton(this, 120, "+/-", wxPoint(10, 280), wxSize(70, 50));	
	button19 = new wxButton(this, 119, "DEC", wxPoint(150, 280), wxSize(70, 50));
	button10 = new wxButton(this, 110, "+", wxPoint(220, 130), wxSize(70, 50));
	button11 = new wxButton(this, 111, "-", wxPoint(290, 130), wxSize(70, 50));
	button12 = new wxButton(this, 112, "x", wxPoint(220, 180), wxSize(70, 50));
	button13 = new wxButton(this, 113, "\u00F7", wxPoint(290, 180), wxSize(70, 50));
	button16 = new wxButton(this, 116, "MOD", wxPoint(220, 230), wxSize(70, 50));
	button17 = new wxButton(this, 117, "BIN", wxPoint(290, 230), wxSize(70, 50));
	button18 = new wxButton(this, 118, "HEX", wxPoint(220, 280), wxSize(70, 50));
	button14 = new wxButton(this, 114, "=", wxPoint(290, 280), wxSize(70, 50));
	button15 = new wxButton(this, 115, "C", wxPoint(10, 80), wxSize(70, 50));
	button21 = new wxButton(this, 121, "DEL", wxPoint(80, 80), wxSize(70, 50));
	//textboxes
	inputBox = new wxTextCtrl(this, 122, "", wxPoint(150,80), wxSize(210,50));
	outputBox = new wxTextCtrl(this, 123, "", wxPoint(10, 10), wxSize(350, 70));

}

cWindow::~cWindow() {

}