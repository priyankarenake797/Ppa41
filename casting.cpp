#include<iostream>
using namespace std;


class Base
{
    public:
       int A,B;

};

class Derived : public Base
{
    public:
       int X,Y;

};

int main()
{
    Base *bp=NULL;
    Derived *dp=NULL;

    Base bobj;
    Derived dobj;


    bp = &bobj;    //no casting        A
    dp = &dobj;    //no casting        A
    bp = &dobj;    //upcasting         A
    //dp = &bobj;   //downcasting       Not Allowd
    return 0;
}