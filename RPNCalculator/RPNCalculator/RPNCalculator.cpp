#include "RPNCalculator.hpp"
#include "AdditionOperation.hpp"
#include "SubtractionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "DivisionOperation.hpp"
#include <iostream>
#include <sstream>

using namespace std;

class RPNCalculator {
private:
	int result;
	std::stack<int> operandStack;

	// Determines the type of operation to be performed
	Operation * RPNCalculator::operation_type(char op) {
		switch (op) {
		case AdditionOperation::ADDITION_CODE:
			return new AdditionOperation;
		case SubtractionOperation::SUBTRACTION_CODE:
			return new SubtractionOperation;
		case MultiplicationOperation::MULTIPLICATION_CODE:
			return new MultiplicationOperation;
		case DivisionOperation::DIVISION_CODE:
			return new DivisionOperation;
		}
	}
	
	// Pops the top 2 operands from the stack, performs the correct operation, 
	// and pushes the result back onto the stack
	// AKA this performs one operation from the user-provided formula at a time
	void RPNCalculator::perform(Operation * opObject)
	{
		int above;
		int below;

		above = operandStack.top();
		operandStack.pop();

		below = operandStack.top();
		operandStack.pop();

		result = opObject->Operation::perform(above, below);

		operandStack.push(result);
	}
	

public:
	//Reads the user formula, pushes integers to the stack, and performs 
	//an operation on the top 2 elements when it reaches an operand.
	//The final result is pushed back to the stack and displayed to the user.
	int RPNCalculator::process_form(string formula) {
		//read the formula left to right
		//push each integer to the stack
		//when you reach an operand: push top 2 and use with operator
		//push result back to the stack
		// return final value when reach the end

		//create istringstream iss and pass in formula string
		istringstream iss(formula);
		string operand;
		char op;
		
		//while can loop and use extraction operator on iss to extract a second string called operand
		while (iss.good()) {
			iss >> operand;
			if (iss.good()) {
				// take operand and pass it as parameter to a second nested istringstream object iss2
				istringstream iss2(operand);
				int number;
				if (iss2 >> number) {
					operandStack.push(number);
				} else {
					iss2 >> op;
					perform(operation_type(op));

				}
			}
			

			//try to extract an integer from iss2

			//if yes, push on stack

			// if no, extract char and use as operation

			//then call perform(operation_type(operand[0]);
		}

		return result;
	}
};


