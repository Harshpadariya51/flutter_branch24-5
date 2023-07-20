#include<iostream>
using namespace std;
class base{
	protected:
		int a;
	public:
		void getdata()
		{
			cout<<"enter the value of a=";
			cin>>a;
		}
};
class derived1:public base{
	protected:
		int b;
	public:
		void getdata1()
		{
			cout<<"enter the value of b=";
			cin>>b;
		}
};
class derived2:public base{
	protected:
		int c;
	public:
		void getdata2()
		{
			cout<<"enter the value of c=";
			cin>>c;
		}
};
class derived3:public derived1,public derived2{
	public:
		void show()
		{
			cout<<"the addition of a and b"<<derived1::a+b+c;
		}
};
int main()
{
	derived3 d3;
	d3.derived1::getdata();
	d3.getdata2();
	d3.getdata1();
	d3.show();
}
