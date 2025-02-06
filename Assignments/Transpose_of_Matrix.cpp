#include<iostream>
using namespace std;
int main()
{
	int m,n,sum=0;
	int a[3][2],b[2][4],result[3][4];
	cout<<"Enter the 1st matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter the "<< i << j<<" element ";
			cin>>a[i][j];
	}
}
    cout<<"The Matrix form is "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"     "<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Transpose of the Matrix is "<<endl;
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"Enter the 2nd matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"Enter the "<< i << j <<" element  ";
			cin>>b[i][j];
			
		}
	}
	cout<<"The Matrix form is "<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"     "<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			sum=0;
			for(int k=0;k<2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			result[i][j]=sum;
		}
	}
	cout<<"Resulting Matrix is "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<"    "<<result[i][j]<< " ";
		}
		cout<<endl;
	}
	
}