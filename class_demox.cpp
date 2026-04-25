#include <iostream>
using namespace std;

class demo
{
    public:
    int i;
    float f;

};

int main()
{
   demo dobj;
   
   cout<<sizeof(dobj)<<"\n";
   return 0;
}