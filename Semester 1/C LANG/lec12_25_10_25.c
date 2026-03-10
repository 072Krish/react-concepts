#include<stdio.h>
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int z=add(a,b);
    printf("%d",z);
}