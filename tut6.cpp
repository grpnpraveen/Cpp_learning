#include<iostream>
using namespace std;
#include<string>
void something();
int add(int a);
int add(int x,int y)
{
	cout<<x+y;
}
int main()
{
	something();	
	add(2,3);
	add(2);
}
void something()
{
	cout<<"ok";
} 

//There is a function over loading in c++

int add(int a)
{
	cout<<a<<"secong"<<endl;
}
