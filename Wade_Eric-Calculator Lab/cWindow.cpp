#include "cWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(cWindow, wxFrame)
EVT_BUTTON(wxID_ANY, cWindow::OnButtonClick)
wxEND_EVENT_TABLE()

cWindow::cWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400, 200), wxSize(385, 385))
{
	ButtonFactory* Factory = new ButtonFactory();
	//numpad
	//button7 = new wxButton(this, 107, "7", wxPoint(10, 130), wxSize(70, 50));
	button7 = Factory->CreateNumpadButton(7, this, 10, 130);
	//button8 = new wxButton(this, 108, "8", wxPoint(80, 130), wxSize(70, 50));
	button8 = Factory->CreateNumpadButton(8, this, 80, 130);
	//button9 = new wxButton(this, 109, "9", wxPoint(150, 130), wxSize(70, 50));
	button9 = Factory->CreateNumpadButton(9, this, 150, 130);
	//button4 = new wxButton(this, 104, "4", wxPoint(10, 180), wxSize(70, 50));
	button4 = Factory->CreateNumpadButton(4, this, 10, 180);
	//button5 = new wxButton(this, 105, "5", wxPoint(80, 180), wxSize(70, 50));
	button5 = Factory->CreateNumpadButton(5, this, 80, 180);
	//button6 = new wxButton(this, 106, "6", wxPoint(150, 180), wxSize(70, 50));
	button6 = Factory->CreateNumpadButton(6, this, 150, 180);
	//button1 = new wxButton(this, 107, "1", wxPoint(10, 230), wxSize(70, 50));
	button1 = Factory->CreateNumpadButton(1, this, 10, 230);
	//button2 = new wxButton(this, 108, "2", wxPoint(80, 230), wxSize(70, 50));
	button2 = Factory->CreateNumpadButton(2, this, 80, 230);
	//button3 = new wxButton(this, 109, "3", wxPoint(150, 230), wxSize(70, 50));
	button3 = Factory->CreateNumpadButton(3, this, 150, 230);
	//button0 = new wxButton(this, 100, "0", wxPoint(80, 280), wxSize(70, 50));
	button0 = Factory->CreateNumpadButton(0, this, 80, 280);
	//controls
	button20 = new wxButton(this, 120, "+/-", wxPoint(10, 280), wxSize(70, 50));
	button19 = new wxButton(this, 119, "DEC", wxPoint(150, 280), wxSize(70, 50));
	button10 = Factory->CreateAddButton(this);
	button11 = Factory->CreateSubtractButton(this);
	button12 = new wxButton(this, 112, "x", wxPoint(220, 180), wxSize(70, 50));
	button13 = new wxButton(this, 113, "\u00F7", wxPoint(290, 180), wxSize(70, 50));
	button16 = new wxButton(this, 116, "MOD", wxPoint(220, 230), wxSize(70, 50));
	button17 = new wxButton(this, 117, "BIN", wxPoint(290, 230), wxSize(70, 50));
	button18 = new wxButton(this, 118, "HEX", wxPoint(220, 280), wxSize(70, 50));
	button14 = new wxButton(this, 114, "=", wxPoint(290, 280), wxSize(70, 50));
	button15 = new wxButton(this, 115, "C", wxPoint(10, 80), wxSize(70, 50));
	button21 = new wxButton(this, 121, "DEL", wxPoint(80, 80), wxSize(70, 50));
	//textboxes
	inputBox = new wxTextCtrl(this, 122, "", wxPoint(150, 80), wxSize(210, 50));
	outputBox = new wxTextCtrl(this, 123, "", wxPoint(10, 10), wxSize(350, 70));

}

void cWindow::OnButtonClick(wxCommandEvent& evt)
{
	std::string output;
	int id = evt.GetId();

	//wxButton tempButton

	if (id < 110)
	{
		int val = id - 100;
		output = std::to_string(val);

	}
	else
		switch (id)
		{
		case 110:
			output = "+";
			break;
		case 111:
			output = "-";
			break;
		case 112:
			output = "x";
			break;
		case 113:
			output = "\u00F7";
			break;
		case 114:
			output = "=";
			break;
		case 115:
			outputBox->Clear();
			break;
		case 116:
			output = "MOD";
			break;
		case 117:
			output = "BIN";
			break;
		case 118:
			output = "HEX";
			break;
		case 119:
			output = "DEC";
			break;
		case 120:
			output = "+/-";
			break;
		case 121:
			output = "DEL";
			break;
		}

	outputBox->AppendText(output);
}

cWindow::~cWindow() {

}
