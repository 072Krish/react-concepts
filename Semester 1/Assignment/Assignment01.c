#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A");
    scanf("%d",&a);
    printf("Enter B");
    scanf("%d",&b);
    printf("Reminder of A by B: %d\n",a%b);
    printf("Reminder of B by A: %d\n",b%a);
}