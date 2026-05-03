#include<iostream>
using namespace std;

class demo
{
public:
       int i;         //non static 
       int j;         // nonstatic
       static int k;     // static

};

int main()
{
    demo dobj;

    cout<<sizeof(dobj);

    

    return 0;
}