#include<iostream>
using namespace std;
class B;
class A
{
	public:
		int n;
		void disp()
		{
			cout<<"enter the number"<<endl;
			cin>>n;
		}
		friend void get();
};
class B
{
	public:
		int a;
		public:
			void get()
			{
				cout<<"enter the number"<<endl;
				cin>>a;
			}
			friend void get();
};
void show(A  x,B y)
{
	if(x.n>y.a)
	{
		cout<<"1st number is greater "<<endl;
	}
	else
	cout<<"2nd number is greater"<<endl;
}
int main()
{
	A obj;
	B obj1;
	obj.disp();
	obj1.get();
	show(obj,obj1);
}