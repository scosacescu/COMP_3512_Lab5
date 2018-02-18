#include "AdditionOperation.hpp"
#include "SubtractionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "DivisionOperation.hpp"
#include <stack>

//The RPNCalculator class header file. Defines all functionality and structures
//needed to create a command-line Reverse Polish Notation calculator
class RPNCalculator {
private:
	int result;
	std::stack<int> operandStack;

	Operation * operation_type(char op);

	void perform(Operation *);

public:
	int process_form(string);


};