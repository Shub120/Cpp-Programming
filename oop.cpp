#include<iostream>

using namespace std;


class Arthematic 
{


public:
      int no1;
      int no2;

      Arthematic()
      {
        int no1 =0;
        int no2 =0;
      }

      Arthematic(int value1 , int value2)
      {
         no1 =value1;
         no2 = value2;

      }

      int Addition()
        {
            int Ans=0;
            Ans=no1+no2;
            return Ans;
        }
        int Substraction()
        {
             int Ans = 0;
            Ans=no1*no2;
            return Ans;


        }
           

};

int main()
{

    Arthematic aobj  (11 , 12);
    int Result =0;

    Result= aobj.Addition();
    cout<<"Addition is :"<<Result<<"\n";

    Result= aobj.Substraction();
    cout<<"Substraction is :"<<Result<<"\n";



    return 0;
}