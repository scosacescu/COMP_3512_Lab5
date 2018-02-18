#pragma ONCE
using namespace std;

// The Operation Interface. This is the base of all derived Operation classes
// and outlines the core functionality that any given RPN calculation should have.
class Operation {
public:
	virtual ~Operation() {};
	virtual char get_code() = 0;
	virtual int perform(int, int) = 0;

};