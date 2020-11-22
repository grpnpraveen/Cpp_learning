#include<iostream>
using namespace std;
#include<string>
int main()
{
	
	int a=0;
	while(a<10)
	{
		cout<<"ture"<<endl;
		a++;
	}
	do{
		cout<<"ok"<<endl;
		a++;
	}while(a<15);
	
	int d[5];
	for(int i=0;i<5;i++)
	{	
		cout<<"enter values of d["<<i<<"]";
		cin>>d[i];
	}
	cout<<"The values are :"<<endl;
	for(int j=0;j<5;j++)
	{
		
		cout<<d[j]<<"->";
	}
}
