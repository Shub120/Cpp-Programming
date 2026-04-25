#include<iostream>
using namespace std;

class demo
{
    public:
    int i;   // charasteristic 
    float f; // charasteristic

    void fun()        // behaviour
    {
        cout<<"inside funn\n";
    }
};

int main()
{
   demo dobj;
   cout<<dobj.i<<"\n";
   dobj.fun();
   
  
   return 0;
}