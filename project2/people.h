#ifndef PEOPLE_H
#define PEOPLE_H
#include<iostream>
#include "birthday.h"
using namespace std;

class people
{
	public:
		people(string name,birthday bb);
		void print();
	protected:
		string name;
		birthday bbb;
};

#endif
