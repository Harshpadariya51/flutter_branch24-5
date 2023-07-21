#include<iostream>
using namespace std;
class base{
	public:
		void show()
		{
			cout<<"this is base class"<<endl;
		}
};
class derived:public base{
	public:
		void show()
		{
			cout<<"this is derived class..."<<endl;
		}
};
int main()
{
	derived d1;
	d1.show();
	d1.base::show();
}
