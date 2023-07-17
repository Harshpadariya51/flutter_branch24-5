/*3. WAP to print value of variable using special assignment operator :-*/

#include<iostream>
using namespace std;

int main()
{
    int a=22;
    cout << "Value of a is : " << a << endl;
    int b=a=10;     
    cout << "After use of special assignment operator : " << endl << "value of a : " << a << endl;
    cout << "Value of b : " << b;
    return 0;
}
