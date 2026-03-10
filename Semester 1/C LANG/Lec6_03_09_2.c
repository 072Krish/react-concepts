#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter the three side");
    scanf("%d%d%d", &a,&b,&c);

    if(b+c>a && a+b>c && c+a>b)
    {
        printf("the triangle is formed");
    }

    else {
        printf("the triangle is not formed");
    }
}
