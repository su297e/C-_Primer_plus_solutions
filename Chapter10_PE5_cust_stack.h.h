

struct customer
{
	char fullname[35];
	double payment;
};


class stack
{

private:
	
	
	int top;
	enum{MAX=10};
	customer arr[MAX];



public:
	stack();
	
	
	void addItem(const customer &st);
	
	void showItem()const;



};