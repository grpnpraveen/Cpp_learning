#include "one.h"
#include<iostream>
using namespace std;
one::one(int x)
{	
	y=x;
	this->x=x;
	cout<<"started one class  "<<y<<" "<<this->x<<endl;
	
}
one::~one()
{
	cout<<endl;
	cout<<"CLASS ONE HAS ENDED"<<endl;
}
void one::printing()
{
	cout<<"printing"<<endl;
}
