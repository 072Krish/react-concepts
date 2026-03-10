#include<stdio.h>
int main()
{
    for(int i=0;i<=1000;i++)
    {
        printf("From for loop");
        printf("%d\n",i);
    }
    printf("From while loop");
    int i=0;
    while(i<=1000)
    {
        printf("%d\n",i);
        i++;
    }
}