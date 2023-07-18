#include<iostream>
using namespace std;
class demo{
	public:
		demo()
		{
			cout<<"this is constructor.."<<endl;
		}
		~demo()
		{
			cout<<"this is desconstructor.."<<endl;
		}
		
};
int main()
{
	demo d;
}
