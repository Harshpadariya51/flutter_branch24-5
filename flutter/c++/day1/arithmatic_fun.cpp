/* write a program to perform arithmatic opration using function */
#include<iostream>
using namespace std;

int add();// declare function
int sub();
int mul();
int div();

int main()
{
	add();// calling function
	sub();
	mul();
	div();
	return 0;
}

//define function
int add()
{
	int a,b,c;
	cout << "add two value : "<< endl;
	cout << "enter value of a : ";
	cin >> a;
	cout << "enter value of b : ";
	cin >> b;
	c=a+b;
	cout << "a + b: ans is = "<< c <<endl;
	return 0;

}

int sub()
{
	
	int a,b,c;
	cout << "sub two value : "<<endl;
	cout << "enter value of a : ";
	cin >> a;
	cout << "enter value of b : ";
	cin >> b;
	c=a-b;
	cout << "a - b : ans is = "<< c <<endl;
	return 0;
}


int mul()
{
	int a,b,c;
	cout << "mul two value : "<<endl;
	cout <<"enter value of a : ";
	cin >> a;
	cout <<"enter value of b : ";
	cin >> b;
	c=a*b;
	cout << "a*b :ans is = "<< c <<endl;
	return 0;
}

int div()
{
	int a,b,c;
	cout << "div two value : "<<endl;
	cout << "enter value of a : ";
	cin >> a;
	cout << "enter value of b : ";
	cin >> b;
	c=a/b;
	cout << "a/b : ans is = "<< c <<endl;
	return 0;
}

