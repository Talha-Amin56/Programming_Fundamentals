#include<iostream>
using namespace std;
int main()
{
	int sec,hours,minutes;
	cout<<"Enter the seconds="<<endl;
	cin>>sec;
	hours=sec/3600;
	sec=sec%3600;
	minutes=sec/60;
	sec=sec%60;
	cout<<"The time is = "<< hours << ":" << minutes << ":" << sec;
}