#include<stdio.h>
int main()
{
    int a,b,c,d,e,big;
    printf("Enter the Five Variables: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if (a>b){
        big=a;
    }
    if (b>a)
    {
        big=b;
    }
    if(b>big)
    {
        big=c;
    }
    if(d>big)
    {
        big=d;
    }
    if (e>big)
    {
        big=e;
    }
    printf("Greatest Number is %d",big);
}