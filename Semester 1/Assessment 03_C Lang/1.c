#include<stdio.h>
void sub(int a,int b){
    int f=a-b;
    printf("%d",f);
    printf("\n");
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    sub(a,b);
    sub(2,4);
    sub(5,6);
}