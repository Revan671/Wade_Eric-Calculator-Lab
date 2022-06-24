#include "ButtonFactory.h"

ButtonFactory::ButtonFactory() {
	idCounter = 100;
}

ButtonFactory::~ButtonFactory() {

}

wxButton* ButtonFactory::CreateNumpadButton(int number, wxWindow* frame) {

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

}

wxButton* ButtonFactory::CreateDivisionButton(wxWindow* frame) {

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