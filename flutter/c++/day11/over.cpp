#include<iostream>
using namespace std;
class base {
	int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void getdata(double x,double y)
		{
			a=x;
			b=y;
		}
		void add()
		{
			cout<<"the addition of two number="<<a+b;
		}
};
int main()
{
	base b1;
	b1.getdata(10,15);
	b1.getdata(12.5,10.5);
	b1.add();
}
