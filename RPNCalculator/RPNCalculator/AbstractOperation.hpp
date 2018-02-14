class AbstractOperation : Operation {
private:
	char operation_type;
public:
	AbstractOperation(char x) : operation_type(x) {};
	virtual ~AbstractOperation() {};

	char get_code() { return operation_type; };


};