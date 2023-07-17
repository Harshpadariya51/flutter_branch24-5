#include<iostream>
using namespace std;
int age=20;
int main()
{
	int age=15;
	{
		int value=age;
		int age=18;
		cout<<"the value of value is ="<<value<<endl;
		cout<<"the value of age is "<<age<<endl;
	}
	cout<<"the value of local age "<<age<<endl;
	cout<<"the globle value of age "<<::age;
}
