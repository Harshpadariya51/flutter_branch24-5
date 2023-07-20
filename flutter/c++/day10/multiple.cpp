#include<iostream>
using namespace std;
class base1 {
	protected:
		int a;
	public:
		void getdata()
		{
			cout<<"enter the value of a=";
			cin>>a;
		}
};
class base2
{
	protected:
		int b;
	public:
		void getdata1(){
			cout<<"enter the value of b=";
			cin>>b;
		}
};
class derived1:public base1,public base2{
	public:
		void show()
		{
			cout<<"the total of a+b="<< a+b;
		}
};
int main()
{
	derived1 done;
	done.getdata();
	done.getdata1();
	done.show();
}
