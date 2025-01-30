#include<iostream>
using namespace std;
class B;
class A
{
	public:
	int n;
	void show()
	{
		cout<<"Enter a number :"<<endl;
		cin>>n;
	}
	friend void get();
};
class B
	{
		public:
		int a,b;
		void get()
		{
			cout<<"Enter two numbers :"<<endl;
			cin>>a;
		}
	};
	int main()
	{
		int sum;
		A obj1;
		B obj2;
		obj1.show();
		obj2.get(obj 1);
	}
