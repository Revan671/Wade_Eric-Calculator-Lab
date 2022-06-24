#pragma once
#include "wx/wx.h"

class ButtonFactory
{
private:
	int idCounter;
public:
	ButtonFactory();
	~ButtonFactory();
	wxButton* CreateNumpadButton(int number, wxWindow* frame);
	wxButton* CreateAddButton(wxWindow* frame);
	wxButton* CreateSubtractButton(wxWindow* frame);
	wxButton* CreateMultiplicationButton(wxWindow* frame);
	wxButton* CreateDivisionButton(wxWindow* frame);
	wxButton* CreateEqualsButton(wxWindow* frame);
	wxButton* CreateClearButton(wxWindow* frame);
	wxButton* CreateMODButton(wxWindow* frame);
	wxButton* CreateBINButton(wxWindow* frame);
	wxButton* CreateHEXButton(wxWindow* frame);
	wxButton* CreateDECIButton(wxWindow* frame);
	wxButton* CreateSignButton(wxWindow* frame);
	wxButton* CreateDeleteButton(wxWindow* frame);
};

