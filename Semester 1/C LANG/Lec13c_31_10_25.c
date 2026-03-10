#include<stdio.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    int ans=n*fact(n-1);
    return ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=fact(n);
    printf("%d",x);
}