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
   
   cout<<sizeof(dobj)<<"\n";
   return 0;
}