#include "people.h"
#include<iostream>
using namespace std;
people::people(string name,birthday bb):bbb(bb)   //:bbb(bb)  is nothing but equalling two objects here bbb=bb
{
	this->name=name;
	
}

void people::print()
{
	cout<<this->name<<endl;
	cout<<"Birthday: ";
	bbb.prints();
	
}
