#include "birthday.h"
#include<iostream>
using namespace std;

birthday::birthday(int x,int y,int z)
{
	this->x=x;
	this->y=y;
	this->z=z;
	
	
}

void birthday::prints()
{
	cout<<x<<"/"<<y<<"/"<<z;
}
