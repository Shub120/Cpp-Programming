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
    Base*bp=NULL;
    Derived dobj;
    
    bp=&dobj;  //upcasting

return 0;
}