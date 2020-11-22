#include<iostream>
#include<string>
using namespace std;
void change1(int x)
{
	x=2;
}
void change2(int *r)
{
	*r=2;
}

int main()
{
	int x=1;
	int y=1;
	change1(x);			//passing by value
	change2(&y);		//passing by reference
	cout<<x<<endl;
	cout<<y<<endl;
}
