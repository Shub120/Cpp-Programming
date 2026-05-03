#include<iostream>
using namespace std;

class demo
{
public:
       int i;         //non static 
       int j;         // nonstatic
       static int k;     // static

       demo()
       {
        i=0;
        j=0;
       }
      
       void fun()  //static method
       {
        cout<<"inside static gun\n";
        
        cout<<"k:"<<k<<"\n";
       }

       static void gun()   //nonstatic method  
       {
        cout<<"inside nonststic fun\n";
        cout<<"i:"<<i<<"\n";
        cout<<"j:"<<j<<"\n";
        cout<<"k:"<<k<<"\n";
       }
};

int demo::k=11;

int main()
{
    demo dobj;
    
    demo.gun();
    cout<<demo::k<<"\n";        //11    
    cout<< dobj.i<<"\n";       //0
    cout<< dobj.j<<"\n";       //0

    dobj.fun();
    return 0;
}