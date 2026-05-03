#include <stdio.h>

int Add(int no1,int no2)
{
    int result ;
    result=no1+no2;
    return result;

}

int Sub(int no1,int no2)
{
    int result;
    result=no1-no2;
    return result;

}

int main()
{
    int a=10;
    int b=20;
    int answer=0;

    answer=Add(a,b);
    printf("your answer of addition is =%d\n",answer);
    
    answer=Sub(a,b);
    printf("your answer substraction is=%d\n",answer);

    return 0;

}