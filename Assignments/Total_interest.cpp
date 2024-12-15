#include<iostream>
using namespace std;
int main()
{
	float pa,ny,netinterest,rate;
	cout<<"Enter the principle amount "<<endl;
	cin>>pa;
	cout<<"Enter the no of years "<<endl;
	cin>>ny;
	cout<<"Enter rate of interest ";
	cin>>rate;
	netinterest=(pa*rate*ny)/100;
	cout<<"The rate interest is = " << netinterest ;
	
}
