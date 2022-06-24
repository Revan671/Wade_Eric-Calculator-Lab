#include "cWindow.h"
#include "ButtonFactory.h"

wxBEGIN_EVENT_TABLE(cWindow, wxFrame)

	EVT_BUTTON(wxID_ANY, cWindow::OnButtonClick)
wxEND_EVENT_TABLE()

cWindow::cWindow() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400,200), wxSize(385,385))

{
	ButtonFactory* Factory = new ButtonFactory();
	//numpad
	button7 = Factory->CreateNumpadButton(7, this, 10, 130);
	button8 = Factory->CreateNumpadButton(8, this, 80, 130);
	button9 = Factory->CreateNumpadButton(9, this, 150, 130);
	button4 = Factory->CreateNumpadButton(4, this, 10, 180);
	button5 = Factory->CreateNumpadButton(5, this, 80, 180);
	button6 = Factory->CreateNumpadButton(6, this, 150, 180);
	button1 = Factory->CreateNumpadButton(1, this, 10, 230);
	button2 = Factory->CreateNumpadButton(2, this, 80, 230);
	button3 = Factory->CreateNumpadButton(3, this, 150, 230);
	button0 = Factory->CreateNumpadButton(0, this, 80, 280);
	//controls
	button20 = Factory->CreateSignButton(this);
	button19 = Factory->CreateDECIButton(this);
	button10 = Factory->CreateAddButton(this);
	button11 = Factory->CreateSubtractButton(this);
	button12 = Factory->CreateMultiplicationButton(this);
	button13 = Factory->CreateDivisionButton(this);
	button16 = Factory->CreateMODButton(this);
	button17 = Factory->CreateBINButton(this);
	button18 = Factory->CreateHEXButton(this);
	button14 = Factory->CreateEqualsButton(this);
	button15 = Factory->CreateClearButton(this);
	button21 = Factory->CreateDeleteButton(this);
	//textboxes
	inputBox = new wxTextCtrl(this, 122, "", wxPoint(150, 80), wxSize(210, 50));
	outputBox = new wxTextCtrl(this, 123, "", wxPoint(10, 10), wxSize(350, 70));

}

void cWindow::OnButtonClick(wxCommandEvent& evt) 
{
	std::string output;
	int id = evt.GetId();
	
	//wxButton tempButton

	if(id < 110)
	{
		int val = id - 100;
		output = std::to_string(val);
		
	}else
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