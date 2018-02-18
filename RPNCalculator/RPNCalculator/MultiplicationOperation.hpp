#include "AbstractOperation.hpp"

class MultiplicationOperation : public AbstractOperation {
public:
	//members
	static const char MULTIPLICATION_CODE = '*';
	
	//methods
	MultiplicationOperation() : AbstractOperation(MULTIPLICATION_CODE) {};
	virtual ~MultiplicationOperation() {};
	int perform(int above, int below) {
		return below * above;
	}
};