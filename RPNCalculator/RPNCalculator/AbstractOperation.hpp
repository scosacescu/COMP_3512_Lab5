#include "Operation.hpp"

// The abstract AbstractOperation class. This implements the base Operation
// interface, and adds some extra functionality to be inherited by each
// operation in turn.
class AbstractOperation : public Operation {
private:
	char operation_type;
public:
	AbstractOperation(char op) : operation_type(op) {};
	virtual ~AbstractOperation() {};

	inline char get_code() { return operation_type; };
	virtual int perform(int, int) = 0;
};