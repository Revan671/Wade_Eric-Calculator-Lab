#pragma once
#include <string>
#include <vector>
#include "IBaseCommand.h"


class CalculatorProcessor 
{
private:
	CalculatorProcessor() {}
	static CalculatorProcessor* _processor;
	int baseNumber;
	std::vector<IBaseCommand> commands;
public:
	static CalculatorProcessor* GetInstance();
	void SetBaseNumber(int number);

	CalculatorProcessor(CalculatorProcessor& other) = delete;
	void operator=(const CalculatorProcessor& other) = delete;

	std::string GetDecimal();
	std::string GetHexadecimal();
	std::string GetBinary();
	//std::string GetAddition(int addNum);
	//std::string GetSubtraction(int subNum);
	//std::string GetMultiplication(int multNum);
	//std::string GetDivision(int divNum);
	std::string GetModulus(int modNum);

};

CalculatorProcessor* CalculatorProcessor::_processor = nullptr;