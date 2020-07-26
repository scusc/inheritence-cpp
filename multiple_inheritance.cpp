#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void get_a()
			{
				cout<<"Enter the number \n";
				cin>>a;
			}
};
class B
{
	protected:
		int b;
		public:
			void get_b()
			{
				cout<<"Enter the number \n";
				cin>> b;
			}
};
class C:public A,public B
{
	public:
		void display()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"The sum is : "<<a+b;
			cout<<"\t The difference is :"<<a-b;
		}	
};
int main()
{
	C p;
	p.get_a();
	p.get_b();
	p.display();
}
