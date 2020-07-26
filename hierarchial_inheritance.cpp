#include<iostream>
using namespace std;
class a
{
	char a[6];
	public:
		void deptdisplay()
		{
			cout<<"Enter the dept : \n";
			cin>>a;
			cout<<"Department : "<<a;	
		}	
};
class name:private a
{
	char name[29];
	public:
		void namedisplay()
		{
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Name : "<<name;
		}
		
};
int main()
{
	name p;
	p.deptdisplay();
	p.namedisplay();
}
