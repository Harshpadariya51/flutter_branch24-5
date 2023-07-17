/*1. WAP TO PERFROM GETTER AND SETTER */

#include <iostream>
using namespace std;

class get_and_set
{
    private:
        int age;
    public:
        void setdata(int a);    
        int getdata();
};
void get_and_set::setdata(int a)
{
    age=a;
}
int get_and_set::getdata()
{
    return age;
}
int main()
{
    get_and_set obj;
    obj.setdata(18);
    cout << "Age is : " << obj.getdata();
    return 0;
}
