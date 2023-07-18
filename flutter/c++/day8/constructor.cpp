#include<iostream>
using namespace std;
class add{
	private:
		int a,b;
	public:
		add(){
			cout<<"enter the value of a=";
			cin>>a;
			cout<<"enter the value of b=";
			cin>>b;
		}
		void sum()
		{
			cout<<"tyhe addition of a and b is="<<a+b;
		}
};
int main ()
{
	add a1;
	a1.sum();
}
