#include<stdio.h>
int main(){
    int i,j,n,stars,space;
    n=4;
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
            stars=i;
        }
        else{
            stars=2*n-i;
        }
        space=n-stars;
        for(j=1;j<=space;j++){
            printf(" ");
        }
        for(j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
    }
}