#include<iostream>
using namespace std;
#include<string>
#include "me.h"
dob::dob(int day,int month,int z)
{
	x=day;
	y=month;
	this->z=z;
}

void dob::print()
{
	
	cout<<x<<"/"<<y<<"/"<<z;
	
}
