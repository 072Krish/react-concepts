#include<stdio.h>
void convert(int c){
    int f=((9*c/5)+32);
    printf("%d",f);
    printf("\n");
}
int main(){
    int c;
    scanf("%d",&c);
    convert(c);
    convert(25);
    convert(30);
}