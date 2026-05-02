#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    void Fun()
    {
        cout<<"insidebase fun\n";
    }
    
    virtual void Gun()
    {
        cout<<"insidebase Gun\n";
    }
    virtual void Sun()
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
    virtual void Run()            // Defination
    {
        cout<<"inside Derived Run \n";
    }

};//16byte

int main()
{
   Base*bp=new Derived; //upcastibg
   bp->Fun();  //base fun
   bp->Gun();  //base gun
   bp->Sun();  //derived sun
   //bp->Run();  //Error

    
return 0;
}