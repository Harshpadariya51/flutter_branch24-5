/* write a program to perform swap two value using 3rd varible also use function */
#include<iostream>
using namespace std;
int swap();
int main()
{
	swap();
	return 0;
}
int swap()
{
	int a,b,c;
	cout << "swap two value program"<<endl;
	cout << "enter value of a :";
	cin >>a;
	cout << "enter value of b :";
	cin >>b;
	
	cout <<"before swap"<<endl;
	cout <<"value of a :"<< a <<endl;
	cout <<"value of b: "<< b <<endl;
	
	c=a;
	a=b;
	b=c;
	
	cout <<"after swap"<<endl;
	cout <<"value of a :"<< a <<endl;
	cout <<"value of b: "<< b <<endl;
}
