#include<iostream>
using namespace std;

class Base
{
    int i,j;


};//8bytte

class Derived: public Base
{
    int x,y;
};//16byte

int main()
{
    Derived*dp=NULL;
    Base bobj;

    dp=&bobj; // downcasting

return 0;
}