#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation {
public:
	//members
	static const char ADDITION_CODE = '+';
	
	//methods
	AdditionOperation() : AbstractOperation(ADDITION_CODE) {};
	virtual ~AdditionOperation() {};
	int perform(int above, int below) {
		return below + above;
	}
};