#include "ButtonFactory.h"

ButtonFactory::ButtonFactory() {
	idCounter = 100;
}

ButtonFactory::~ButtonFactory() {

}

wxButton* ButtonFactory::CreateNumpadButton(int number, wxWindow* frame, int x, int y) {
	wxButton* numpadButton = new wxButton(frame, idCounter + number, std::to_string(number), wxPoint(x, y), wxSize(70, 50));
	return numpadButton;
}

wxButton* ButtonFactory::CreateAddButton(wxWindow* frame) {
	wxButton* addButton = new wxButton(frame, 110, "+", wxPoint(220, 130), wxSize(70, 50));
	return addButton;
}

wxButton* ButtonFactory::CreateSubtractButton(wxWindow* frame) {
	wxButton* subtractButton = new wxButton(frame, 111, "-", wxPoint(290, 130), wxSize(70, 50));
	return subtractButton;
}

wxButton* ButtonFactory::CreateMultiplicationButton(wxWindow* frame) {
	wxButton* multiplicationButton = new wxButton(frame, 112, "x", wxPoint(220, 180), wxSize(70, 50));
	return multiplicationButton;
}

wxButton* ButtonFactory::CreateDivisionButton(wxWindow* frame) {
	wxButton* divisionButton = new wxButton(frame, 113, "\u00F7", wxPoint(290, 180), wxSize(70, 50));
	return divisionButton;
}

wxButton* ButtonFactory::CreateEqualsButton(wxWindow* frame) {
	wxButton* equalsButton = new wxButton(frame, 114, "=", wxPoint(290, 280), wxSize(70, 50));
	return equalsButton;
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* frame) {
	wxButton* clearButton = new wxButton(frame, 115, "C", wxPoint(10, 80), wxSize(70, 50));
	return clearButton;
}

wxButton* ButtonFactory::CreateMODButton(wxWindow* frame) {
	wxButton* modButton = new wxButton(frame, 116, "MOD", wxPoint(220, 230), wxSize(70, 50));
	return modButton;
}

wxButton* ButtonFactory::CreateBINButton(wxWindow* frame) {
	wxButton* binButton = new wxButton(frame, 117, "BIN", wxPoint(290, 230), wxSize(70, 50));
	return binButton;
}

wxButton* ButtonFactory::CreateHEXButton(wxWindow* frame) {
	wxButton* hexButton = new wxButton(frame, 118, "HEX", wxPoint(220, 280), wxSize(70, 50));
	return hexButton;
}

wxButton* ButtonFactory::CreateDECIButton(wxWindow* frame) {
	wxButton* deciButton = new wxButton(frame, 119, "DEC", wxPoint(150, 280), wxSize(70, 50));
	return deciButton;
}

wxButton* ButtonFactory::CreateSignButton(wxWindow* frame) {
	wxButton* signButton = new wxButton(frame, 119, "DEC", wxPoint(150, 280), wxSize(70, 50));
	return signButton;
}

wxButton* ButtonFactory::CreateDeleteButton(wxWindow* frame) {
	wxButton* deleteButton = new wxButton(frame, 121, "DEL", wxPoint(80, 80), wxSize(70, 50));
	return deleteButton;
}

