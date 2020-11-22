#include<iostream>
using namespace std;
int main()
{
   int x;
   x=8;
   int *p;
   p=&x;
   cout<<x<<endl;
   cout<<&x<<endl;
   cout<<p<<endl;
   cout<<*p<<endl;
   *p=x;   // cant be used withoout p=&x one
   cout<<*p<<endl;
   cout<<p<<endl;
}
