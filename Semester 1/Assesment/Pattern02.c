#include <stdio.h>
int main()
{
    int m;
    printf("Enter the value m");
    scanf("%d",&m);
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }     
}