#pragma once
#include "IBaseCommand.h"
class MultiplyCommand : public IBaseCommand
{
private:
	int mNum1;
	int mNum2;
public:
	MultiplyCommand(int num1, int num2) {
		mNum1 = num1;
		mNum2 = num2;
	}

	int MultiplyNumbers() {
		int results = mNum1 * mNum2;
		return results;
	}

	void Execute() {
		MultiplyNumbers();
	}
};

