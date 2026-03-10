#include <stdio.h>
int main()
{
    int m=4;
    for(int i=m;i>=0;i--)
    {
        for(int j=0;j<=i;j++){
        printf("* ");
    }
    printf("\n");
}
}