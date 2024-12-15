#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the first number="<<endl;
	cin>>a;
	cout<<"Enter the second number"<<endl;
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout<<"Values after swapping are = " << a << "and" << b;
	return 0;
}