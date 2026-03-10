#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the value of three Variables: ");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum > 1000)
    {
        printf("Sum is greater than 1000");
    }
    else
    {
     printf("Sum is smaller than 1000");
    }
}