#include<iostream>
using namespace std;
#include<string>
#include "dob.h"
#include "me.h"

int main()
{
	dob d(27,9,2002);
	me praveen(d,"PRAVEEN");
	praveen.prints();
	
	return 0;
}
