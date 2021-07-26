#include<iostream>
using namespace std;
#include<string>
#include "me.h"
#include "dob.h"
me::me(dob xyz,string name):q(xyz)
{
	x=name;
}

void me::prints()
{	
cout<<"name:"<<x<<endl;
cout<<"DOB:";
q.print();	
}
