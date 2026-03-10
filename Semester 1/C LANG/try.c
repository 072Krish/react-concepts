#include <stdio.h>
int main()
{
    int m,n,stars;
    printf("Enter m and n");
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i+=2)
     {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
     }

}