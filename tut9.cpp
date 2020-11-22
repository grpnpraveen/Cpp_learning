#include<iostream>
#include<string>
using namespace std;

int main()
{
	int *p;
	p=new int;			// memory aloction in heap
	*p=9;
	cout<<*p<<endl;			
	delete p;
	cout<<*p<<endl;

	
	
	int *o;				// heap memory alocatioin for aarry
	o=new int[3];
	o[0]=2;
	o[1]=3;
	o[2]=4;
	for(int k=0;k<3;k++)
	{
		cout<<o[k]<<"->";
	}
	delete o;
	cout<<endl;
		for(int k=0;k<3;k++)
	{
		cout<<o[k]<<"->";
	}	
}
