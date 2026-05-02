#include<iostream>
using namespace std;

class Base
{
    int i,j;

    void Fun()
    {
        cout<<"insidebase fun\n";
    }
    
    void Gun()
    {
        cout<<"insidebase Gun\n";
    }
    void Sun()
    {
        cout<<"insidebase Sun\n";
    }

};//8bytte

class Derived: public Base
{
    int x,y;

    void Fun()          // redefination of Base calss fun
    {
        cout<<"inside Derived Fun \n";
    }
     void Sun()         // redefination of Base calss Sun
    {
        cout<<"inside Derived Sun \n";
    }
     void Run()            // Defination
    {
        cout<<"inside Derived Run \n";
    }

};//16byte

int main()
{
   cout<<sizeof(Base)<<"\n";
   cout<<sizeof(Derived)<<"\n";

    
return 0;
}