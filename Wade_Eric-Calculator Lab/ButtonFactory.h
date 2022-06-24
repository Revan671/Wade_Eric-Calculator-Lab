#pragma once
#include "wx/wx.h"
class ButtonFactory
{
public:
	wxButton CreateNumpadButton(int number);
	wxButton CreateAddButton();
	wxButton CreateSubtractButton();
	wxButton CreateMultiplicationButton();
	wxButton CreateDivisionButton();
	wxButton CreateEqualsButton();
	wxButton CreateClearButton();
	wxButton CreateMODButton();
	wxButton CreateBINButton();
	wxButton CreateHEXButton();
	wxButton CreateDECIButton();
	wxButton CreateSignButton();
	wxButton CreateDeleteButton();
};

