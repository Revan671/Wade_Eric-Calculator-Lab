#pragma once
#include "wx/wx.h"
class cWindow : public wxFrame
{
public:
	cWindow();
	~cWindow();
	void OnButtonClick(wxCommandEvent& evt);

private:
	//numpad
	wxButton* button0;
	wxButton* button1;
	wxButton* button2;
	wxButton* button3;
	wxButton* button4;
	wxButton* button5;
	wxButton* button6;
	wxButton* button7;
	wxButton* button8;
	wxButton* button9;
	//controls
	wxButton* button10; // +
	wxButton* button11; // -
	wxButton* button12; // x
	wxButton* button13; // /
	wxButton* button14; // =
	wxButton* button15; // c
	wxButton* button16; // mod
	wxButton* button17; // binary
	wxButton* button18; // hex
	wxButton* button19; // decimal
	wxButton* button20; // +/-
	wxButton* button21; // DEL
	//IO
	wxTextCtrl* outputBox;
	wxTextCtrl* inputBox;

};

