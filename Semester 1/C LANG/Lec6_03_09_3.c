#include<stdio.h>
int main()
{
    int x;
    printf("enter x");
    scanf("%d",&x);

    if(x%2==0 && x%4==0)
    {
        printf("the no. is divisible by 2 and 4");

    }
    else
    {
        printf("the no. is not divisible by 2 and 4");

    }
