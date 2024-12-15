#include<iostream>
using namespace std;
int main()
{
	float totalmarks,obtainmarks,percentage;
	cout<<"Enter the total marks=";
	cin>> totalmarks;
	cout<<"Enter the obtained marks=";
	cin>>obtainmarks;
	percentage=( obtainmarks/totalmarks)*100;
	cout<<"your marks percentage is="<<percentage;
	
}