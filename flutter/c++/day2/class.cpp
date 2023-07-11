#include<iostream>
using namespace std;
class add
{
	private :
		int a,b;
	public :
		void getdata()
		{
			cout<<"enter the value of a=";
			cin >>a;
			cout<<"enter the value of b=";
			cin >>b;
		}
		void sum()
		{
			cout <<"the addition of two number is : "<<a+b<<endl;
		}
		void sub()//subscription
		{
			cout <<"the subscription of two number is : "<<a-b<<endl;
		}
		void mul()
		{
			cout<<"the multiplication of two number is : "<<a*b<<endl;
		}
		void div()
		{
			cout<<"the divide of two number is : "<<a/b<<endl;
		}
};
int main()
{
	add a1;
	a1.getdata();
	a1.sum();
	a1.sub();
	a1.mul();
	a1.div();
}
