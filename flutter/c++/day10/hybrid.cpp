#include<iostream>
using namespace std;
class base1{
	protected:
		int a;
	public:
		void getdata()
		{
			cout<<"the value of a=";
			cin>>a;
		}
};
class base2{
	protected:
		int b;
	public:
		void getdata1()
		{
			cout<<"the value of b=";
			cin>>b;
		}
};
class derived:public base1,public base2{
	public:
		void show()
		{
			cout<<"the addition of a and b"<<a+b;
		}
};
int main()
{
	derived d1;
	d1.getdata();
	d1.getdata1();
	d1.show();
}
