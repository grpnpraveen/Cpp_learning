#include<iostream>
#include "people.h"
#include "birthday.h"
using namespace std;


int main()
{
	birthday b(27,9,2001);			
	people p("praveen",b);				// includeing or composing ine class with other
	p.print();
	
	
	
	
	return 0;
}
