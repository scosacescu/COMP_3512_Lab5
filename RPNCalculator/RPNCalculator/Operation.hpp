class Operation {
	virtual char get_code() = 0;
	virtual int perform(int, int) = 0;
	virtual ~Operator() {};
};