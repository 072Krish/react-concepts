#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(i==j||i+j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}