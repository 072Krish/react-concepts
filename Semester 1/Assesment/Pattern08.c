#include <stdio.h>
int main()
{
    int num = 1;
    for (int r = 1; r <=4; r++)
    {
        for (int c = 1; c <=r; c++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
}