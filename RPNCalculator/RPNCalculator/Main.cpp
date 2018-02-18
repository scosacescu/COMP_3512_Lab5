#include <iostream>
#include <iomanip>
#include <string>
#include "Operation.hpp"
#include "RPNCalculator.hpp"


int main() {
	std::cout << "Enter your formula:\n:";
	std::string formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_form(formula);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");
}