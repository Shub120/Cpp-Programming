#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    void Fun()   //1000
    {
        cout<<"insidebase fun\n";
    }
    
    virtual void Gun()  //2000
    {
        cout<<"insidebase Gun\n";
    }
    virtual void Sun()  //3000
    {
        cout<<"insidebase Sun\n";
    }

};//8bytte

class Derived: public Base
{
    int x,y;

    void Fun()          // 4000
    {
        cout<<"inside Derived Fun \n";
    }
     void Sun()         // 5000
    {
        cout<<"inside Derived Sun \n";
    }
    virtual void Run()            // 6000
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