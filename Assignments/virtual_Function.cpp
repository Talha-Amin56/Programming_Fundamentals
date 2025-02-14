#include<iostream>
using namespace std;
class A
{
	public:
	 virtual void get()=0;
};
class B:public A
{
	public:
		void get()
		{
			cout<<"B function"<<endl;

		}
};
class C:public A
{
	public:
		void get()
		{
			cout<<"C function"<<endl;
		}
};
int main()
{
	A *obj;
	obj=new B;
	obj->get();
	
}