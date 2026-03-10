#include<stdio.h>
int main()
{
    int m,n;
    printf("enter values");
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
         if(i==1 || i==4 )
            {
                printf("* ");
            }
            else if(i==2){ // row 2=stars at 1,2,4
            if(j==1 ||j==2 || j==4)
              printf("* ");
            
            else
                printf("  ");
            }
            else if(i==3){ // row 3=stars at 1,3,4
                if(j==1 || j==3||j==4)
                printf("* ");
                else
                printf("  ");

            }
        }
        printf("\n");
    }


}