#include<iostream>
using namespace std;
int main()
{
	int A[4],val;
	for(int i=0;i<=3;i++)
	{
	  cout<<"Enter the elements in array : ";
	  cin>>A[i];
   }
   int passno;
   for(passno=0;passno<3;passno++)
   {
   	for(int i=0;i<3;i++)
   	{
   		if(A[i]>A[i+1]) 
		   {
		   	int temp;
		   	temp=A[i];
		   	A[i]=A[i+1];
		   	A[i+1]=temp;
			} 
	}
   }
   cout<<"Your list after sorting is "<<endl;
   for(int i=0;i<=3;i++)
   {
   	cout<<A[i]<<endl;
   }
   int b,e,m,loc=-1;
   b=0,e=3;
   cout<<"Enter a value to search"<<"  "; 
   cin>>val;
   while(b<=e)
   {
   	m=(b+e)/2;
   	if(val==A[m])
   	{
   		loc=m;
   		cout<<"value find at location  "<<loc;
   		break;
	   }
	else if(val>A[m])
    {
    	b=m+1;
	}
	else
	{
		e=m-1;
	}
   }
   if(loc==-1)
   {
   	cout<<"element not found";
   }
   //else
   //{
   //	cout<<"value find at location  "<<loc;
   //}
   return 0;
}