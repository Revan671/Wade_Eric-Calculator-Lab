#pragma once
#include "IBaseCommand.h"
class DivideCommand : public IBaseCommand
{
private:
	int mNum1;
	int mNum2;
public:
	DivideCommand(int num1, int num2) {
		mNum1 = num1;
		mNum2 = num2;
	}

	int DivideNumbers() {
		int result = mNum1 / mNum2;
		return result;
	}

	int Execute() {
		return DivideNumbers();
	}
};

