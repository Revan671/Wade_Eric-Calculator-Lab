#pragma once
#include "IBaseCommand.h"
class SubtractCommand : public IBaseCommand
{
private:
	int mNum1;
	int mNum2;
public:
	SubtractCommand(int num1, int num2) {
		mNum1 = num1;
		mNum2 = num2;
	}

	SubtractNumbers() {
		int result = mNum1 - mNum2;
		return result;
	}

	void Execute() {
		SubtractNumbers();
	}
};

