#include<iostream>
using namespace std;
class student
{
	protected :
		int rno;
    public:
    	void getrno(int a)
    	{
    		rno=a;
		}
	void putrno(void)
    {
    	cout<<"rno is"<<rno;
	}
};
class test:public virtual student
{
	protected:
		float sub1 ;
		float sub2 ;
		public:
			void getmarks(float x,float y)
			{
				sub1=x;
				sub2=y;
			}
			void putmarks()
			{
				cout<<"sub1 marks are"<<sub1;
				cout<<"sub2 marks are"<<sub2;
			}
};
class sports:public virtual student
{
	protected:
		float score;
    public:
    	void getscore(float a)
    	{
    		score=a;
		}
		void putscore()
		{
			cout<<"score is"<<score;
		}
};
class result:public test,public sports
{
	float total;
	public:
		void display();
};
void result::display(void)
{
	total=sub1 +sub2 +score;
	putrno();
	putmarks();
	putscore();
	cout<<"final score="<<total;
}
int main()
{
	result r;
	r.getrno(3254);
	r.getmarks(3424234234.234234,23542354.32432);
	r.getscore(34.34);
	r.display();
	return 0;
}
