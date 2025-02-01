#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of an array"<<endl;
	cin>>size;
	cout << "Enter " << size << " elements for the array:" << endl;
	int arr[size];
	int pos;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the position where you want to delete"<<endl;
	cin>>pos;
//	if(pos>=0&&pos<=size)
	
	for(int i=pos;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i] <<" ";
	}
}