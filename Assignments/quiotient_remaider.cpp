#include<iostream>
using namespace std;
int main()
{
	int divident,divisor,quotient,remainder;
	cout<<"Enter divident"<<endl;
	cin>>divident;
	cout<<"Enter divisor"<<endl;
	cin>>divisor;
	quotient=divident/divisor;
	remainder=divident%divisor;
	cout<<"your quotient and remainder is = "<< quotient <<" and "<< remainder;
}