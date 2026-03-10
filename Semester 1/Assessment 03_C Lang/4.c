#include<stdio.h>
void result(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf(" \n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    result(n);
}