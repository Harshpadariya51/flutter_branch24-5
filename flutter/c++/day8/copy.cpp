#include<iostream>
using namespace std;
class demo{
	private:
		int a,b;
	public:
		demo(int x,int y)
		{
			a=x;
			b=y;
		}
		demo(demo&ref)
		{
			a=ref.a;
			a=ref.b;
		}
		void sum()
		{
			cout<<"the addition of a and b="<<a+b;
		
	    }
};
int main()
{
	demo d1(10,15);
	demo d2=d1;
	d2.sum();
}
