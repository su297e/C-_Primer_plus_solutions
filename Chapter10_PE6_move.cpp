#include "move.h"
#include <iostream>
using namespace std;


Move::Move(double a, double b){
x=a;y=b;


}

void Move::showmove() const{
	cout<<"X: "<<x<<"  "<<"Y: "<<y<<endl;
}


Move Move::add(const Move &m) const{

	return Move(m.x+x,m.y+y);

}

void Move::reset(double a,double b){
x=a;y=b;
}