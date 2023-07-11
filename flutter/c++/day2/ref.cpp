 #include<iostream>
 using namespace std;
 int main()
 {
 	int a=10;
 	int &b=a;
 	cout<<"the value of a ="<<a<<endl;
 	cout<<"the value of a ="<<b<<endl;
 	b++;
 	cout<<"the value of a="<<a<<endl;
 }
