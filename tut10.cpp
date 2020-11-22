#include<iostream>
#include<string>
#include<fstream>			//file stream
using namespace std;

int main()
{
	cout<<"sterted"<<endl;	
	ofstream fhand;
	fhand.open("first.txt");
	fhand<<"strat";					//writing in a file output file stream
	fhand.close();
	cout<<"finished";
	
	
	
	cout<<endl;	
	ifstream red;					// readinig a file ifstream input file stream
	red.open("first.txt");
	string line;
	if(red.is_open())
	{
		while(getline(red,line))
		{
			cout<<line<<'\n';
		}
		red.close();
	}

}
