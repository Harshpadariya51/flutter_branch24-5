#include<iostream>
using namespace std;
int max (int x,int y);
int main()
{
	int a,b,c;
	cout<<"enter the value of a=";
	cin >> a;
	cout<<"enter the value of b=";
	cin >> b;
	c=max(a,b);
	cout<<"the max number is "<<c;
	return 0;       
}
int max(int x,int y)
{
	return x>y?x:y;
}
