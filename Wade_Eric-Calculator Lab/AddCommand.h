#pragma once
#include "IBaseCommand.h"
class AddCommand : public IBaseCommand 
{
private:
	int mNum1;
	int mNum2;
public:
	AddCommand(int num1, int num2) {
		mNum1 = num1;
		mNum2 = num2;
	}

	int AddNumbers() {
		int result = mNum1 + mNum2;
		return result;
	}

	void Execute() {
		AddNumbers();
	}

};

