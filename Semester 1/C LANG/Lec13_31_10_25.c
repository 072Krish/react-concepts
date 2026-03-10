#include<stdio.h>
    void change (int n)
    {
        n=5;
    }
    int main()
{
    int n=3;
    change (n);
    printf("%d",n);
}
