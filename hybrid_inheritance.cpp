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
				cout<<"Enter the marks of the two subjects \n";
				cin>>sub1>>sub2;
			}
			void put_marks()
			{
				cout<<"\nThe marks of the subjects are : "<<sub1<<" "<<sub2;
			}
};
class sports
{
	protected:
		float score;
		public:
			void get_score()
			{
				cout<<"Enter the score \n";
				cin>>score;
			}
			void put_score()
			{
				cout<<"\nThe score of the student in sports is : "<<score;
			}		
};
class result:public test,public sports
{
	public:
		void display()
		{
			float total=sub1+sub2+score;
			cout<<"\nThe total score of the student is : "<<total;
		}
};
int main()
{
	result z;
	z.get_rn();
	z.get_marks();
	z.get_score();
	z.put_rn();
	z.put_marks();
	z.put_score();
	z.display();
}
