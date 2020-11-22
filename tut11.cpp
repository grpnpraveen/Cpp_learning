#include<iostream>
using namespace std;
class one{
										//classes and objects
public:
	void start(){
		length=10;
		height=20;
	}
	void show(){
		cout<<length<<endl;
		cout<<height<<endl;
	}
	
private:
	int length;
	int height;
};
int main()
{
	one p;
	p.show();
	p.start();
	p.show();	
}

