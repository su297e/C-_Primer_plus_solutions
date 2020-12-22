#include "move.h"
#include <iostream>
using namespace std;

int main()
{
	
	Move obj(5,10), obj2(5,5), obj3(9,9);
	obj.showmove();
	obj2.showmove();
	obj3.showmove();

	obj3=obj.add(obj2);
	obj3.showmove();
	obj3.reset();
	obj3.showmove();

	obj3=obj2.add(obj2);
	obj3.showmove();
	cin.get();
	return 0;
}