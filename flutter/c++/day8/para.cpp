#include<iostream>
using namespace std;
class add{
	private:
		int a,b;
	public:
		add(int x,int y)
		{
			a=x;
			b=y;
		}
		void sum()
		{
			cout<<"the addition of a and b="<<a+b;
		}
};
int main()
{
	add a1(10,15);
	a1.sum();
}
