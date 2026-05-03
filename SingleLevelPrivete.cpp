#include<iostream>
using namespace std;

class Base
{
    private:
    int i,j;
    
    public Base()
    {
        cout<<"inside base constr\n";
        i=0;
        j=0;
    }
    public ~Base()
    {

        cout<<"INside dustru \n";
    }

    void fun()
    {
        cout<<"inside base fun \n";

    }

} ;

class Derived:public Base
{
    int x;
    Derived()
    {
        cout<< "inside Derived con \n";
        int x=0;
    }
    ~Derived()
    {
        cout<<"inside Derived Destructor \n";
    }

    void gun()
    {
        cout<<"inside gun of dreived \n";

    }

};

int main ()
{
    cout<<"Inside main \n";

     Derived dobj();
     cout<<" size of derived class is "<<sizeof(Derived)<<"\n"; 
     cout<<" size of derived class is "<<sizeof(Base)<<"\n"; 
     

     //cout<<dobj.i<<"\n";
     //cout<<dobj.j<<"\n"; //both error

     cout<<dobj.x<<"\n";  //all are 0

     

     cout<<"end of main \n";



return 0;
}