#include "AbstractOperation.hpp"

class DivisionOperation : public AbstractOperation {
public:
	//members
	static const char DIVISION_CODE = '/';
	
	//methods
	DivisionOperation() : AbstractOperation(DIVISION_CODE) {};
	virtual ~DivisionOperation() {};
	int perform(int above, int below) {
		return below / above;
	}
};