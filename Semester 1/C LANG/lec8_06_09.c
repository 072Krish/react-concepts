#include<stdio.h>
int main()
{
    printf("From for loop: ");
    for(int i=0;i<=1000;i++)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
    printf("From while loop: ");
    int i=1;
    while(i<=1000)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
