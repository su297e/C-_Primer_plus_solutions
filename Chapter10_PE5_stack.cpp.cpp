#include "cust_stack.h"
#include <iostream>
using namespace std;

stack::stack()
{
    top=0;
	strcpy(arr[0].fullname,"blank_user");
	arr[0].payment=0.00;
}
/*
stack::stack(const customer &obj)
{
	strcpy(obj.fullname, "test");
	payment=90.00;
}*/

void stack::addItem(const customer &st)
{
	
	arr[top]=st;
	top++;



}




void stack::showItem() const{

for(int i =0;i<top;i++)
{
	cout<<arr[i].fullname<<endl;
}

}