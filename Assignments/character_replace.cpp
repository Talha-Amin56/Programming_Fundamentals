#include<iostream>
using namespace std;
int main()
{
	int size;
	char n,c;
	cout<<"Enter the size of an array :"<<"   ";
	cin>>size;
	char arr[size];
	cout<<"Enter the  "<< size <<" character in array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the new character you want to add :"<<"  ";
	cin>>n;
	cout<<"Enter the replaceable character : "<<"    ";
	cin>>c;
	for(int i=0;i<size;i++)
	{
		if(c==arr[i])
		{
			arr[i]=n;
		}
	}
	cout<<"your new array of character is " <<"  ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}