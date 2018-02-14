int main() {
	std::cout << "Enter your formula:\n:";
	std::String formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_formula(formula);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");
}