#include<stdio.h>
int main()
{
    int num=1;
    int m,n;
    scanf("%d %d", &m, &n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",num);
                num=num+1;
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}