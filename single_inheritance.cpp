#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		int b;
		void set()
		{
			a=6,b=7;
		}
		void display_a()
		{
			cout<<"a = "<<a;
		}
};
class B:protected A
{
	int c=5678;
	public:
		void display()
		{
			c=567;
			//cout<<"a = \n"<<a;cannot access 'a' as it is a private member of class A
			cout<<"\nb = "<<b;
			cout<<"\nc = "<<c;
		}
};
int main()
{
	B p;
	p.set();
	p.display_a();
	p.display();
}
//If 'A' is privately inherited then set and display_a functions will be privately inherited to 'B' even though they are public in 'A' it cant be accessed by derived class as well as main
//If 'A' is pprotectedly inherited then set and display_a functions can be accessed by derived class but cannot be accessed in main
