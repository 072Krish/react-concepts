#include <stdio.h>
int main()
{
    int m,num = 1;
    scanf("%d",&m);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d", num);
                if (i == j)
            {
                num=num+1;
            }
            }
            
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}