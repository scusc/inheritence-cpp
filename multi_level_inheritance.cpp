#include<iostream>
using namespace std;
class stu
{
	protected:
		int roll_no;
		public:
			void get_rn()
			{
				cout<<"Enter the roll no of the student \n";
				cin>>roll_no;
			}
			void put_rn()
			{
				cout<<"The roll no is : "<<roll_no;
			}
};
class test:public stu
{
	protected:
		float sub1;
		float sub2;
		public:
			void get_marks()
			{
				cout<<"\nEnter the marks of the two subjects \n";
				cin>>sub1>>sub2;
			}
			void put_marks()
			{
				cout<<"The marks of the subjects are : "<<sub1<<" "<<sub2;
			}
};
class result:public test
{
	float total;
	public:
		void display()
		{
			total=sub1+sub2;
			cout<<"The total of the two subjects : "<<total;
		}
};
int main()
{
	result q;
	q.get_rn();
	q.put_rn();
	q.get_marks();
	q.put_marks();
	q.display();
}
