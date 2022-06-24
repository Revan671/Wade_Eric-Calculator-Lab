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

std::string CalculatorProcessor::GetAddition(int addNum) {
	std::string results = std::to_string(baseNumber + addNum);
	return results;
}

std::string CalculatorProcessor::GetSubtraction(int subNum) {
	std::string results = std::to_string(baseNumber - subNum);
	return results;
}

std::string CalculatorProcessor::GetMultiplication(int multNum) {
	std::string results = std::to_string(baseNumber * multNum);
	return results;
}