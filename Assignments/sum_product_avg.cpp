#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,sum,product,avg;
	cout<<"enter the value of a=";
	cin>>a;
	cout<<"enter the value of b=";
	cin>>b;
	cout<<"enter the value of c=";
	cin>>c;
	cout<<"enter the value of d=";
	cin>>d;
	sum=a+b+c+d;
	cout<<"your sum is="<<sum<<endl;
	product=a*b*c*d;
	cout<<"your product is="<<product<<endl;
	avg=sum/4;
	cout<<"your avg is="<<avg<<endl;
}
