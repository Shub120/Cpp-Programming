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
   
    bp=new Derived();  //upcasting

return 0;
}