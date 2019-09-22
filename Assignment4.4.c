#include<stdio.h>
void main()
{
    int x;
    for (x=0;x<100;x++)
    {
        if((x>20&&(x<40)||(x>50)&&(x<80))&&(x%2==1))
    printf(" %d",x);
    }
}

