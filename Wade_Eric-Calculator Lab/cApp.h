#pragma once
#include "wx/wx.h"
#include "cWindow.h"
class cApp : public wxApp
{
	cWindow* window = nullptr;

public:
	virtual bool OnInit();
};

