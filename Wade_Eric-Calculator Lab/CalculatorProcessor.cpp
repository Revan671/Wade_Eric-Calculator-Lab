#include "CalculatorProcessor.h"


CalculatorProcessor* CalculatorProcessor::GetInstance() {
	if (_processor == nullptr) {
		_processor = new CalculatorProcessor();
	}
	return _processor;
}

void CalculatorProcessor::SetBaseNumber(int number) {
	baseNumber = number;
}

std::string CalculatorProcessor::GetDecimal() {
	return std::to_string(baseNumber);
}

std::string CalculatorProcessor::GetBinary() {
	std::string results = "";
	int number = baseNumber;

	for (int i = 0; i < 32; i++) {		
		if (number % 2 == 0) {
			results = "0" + results;
		}
		else {
			results = "1" + results;
		}
		number = number / 2;
	}

	return results;
}

std::string CalculatorProcessor::GetHexadecimal() {
	std::string results = "";
	int number = baseNumber;

	while (number > 0) {
		int mod = number % 16;
		if (mod < 10) {
			results = std::to_string(mod) + results;
		}
		else {
			switch (mod)
			{
			case 10:
				results = "A" + results;
				break;
			case 11:
				results = "B" + results;
				break;
			case 12:
				results = "C" + results;
				break;
			case 13:
				results = "D" + results;
				break;
			case 14:
				results = "E" + results;
				break;
			case 15:
				results = "F" + results;
				break;
			default:
				break;
			}
		}
		number = number / 16;
	}
	results = "0x" + results;
	return results;
}

void CalculatorProcessor::GetAddition(int addNum) {
	AddCommand add = new AddCommand(baseNumber, addNum);
	commands.push_back(add);
}

void CalculatorProcessor::GetSubtraction(int subNum) {
	SubtractCommand sub = new SubtractCommand(baseNumber, subNum);
	commands.push_back(sub);
}

void CalculatorProcessor::GetMultiplication(int multNum) {
	MultiplyCommand mult = new MultiplyCommand(baseNumber, multNum);
	commands.push_back(mult);
}

void CalculatorProcessor::GetDivision(int divNum) {
	DivideCommand div = new DivideCommand(baseNumber, divNum);
	commands.push_back(div);
}

std::string CalculatorProcessor::GetModulus(int modNum) {
	std::string results = std::to_string(baseNumber % modNum);
	return results;
}
