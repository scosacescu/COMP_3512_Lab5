#include "AbstractOperation.hpp"

class SubtractionOperation : public AbstractOperation {
public:
	//members
	static const char SUBTRACTION_CODE = '-';
	
	//methods
	SubtractionOperation() : AbstractOperation(SUBTRACTION_CODE) {};
	virtual ~SubtractionOperation() {};
	int perform(int above, int below) {
		return below - above;
	}
};