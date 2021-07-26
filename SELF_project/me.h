#ifndef ME_H
#define ME_H
#include<iostream>
using namespace std;
#include<string>
#include "dob.h"
#include "me.h"
class me{
public:
	me(dob xyz,string name);
	void prints();	
protected:
	string x;
	dob q;
	
};

#endif
