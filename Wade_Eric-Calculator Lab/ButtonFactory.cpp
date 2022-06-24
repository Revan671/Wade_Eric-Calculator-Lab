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

}

wxButton* ButtonFactory::CreateClearButton(wxWindow* frame) {

}

wxButton* ButtonFactory::CreateMODButton(wxWindow* frame) {

}

wxButton* ButtonFactory::CreateBINButton(wxWindow* frame) {

}

wxButton* ButtonFactory::CreateHEXButton(wxWindow* frame) {

}

wxButton* ButtonFactory::CreateDECIButton(wxWindow* frame) {

}

wxButton* ButtonFactory::CreateSignButton(wxWindow* frame) {

}

wxButton* ButtonFactory::CreateDeleteButton(wxWindow* frame) {

}