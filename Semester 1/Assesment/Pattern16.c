#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        // print spaces
        for(int j=0;j<i;j++){
            printf("    ");
        }
        // print stars
        for(int k=i;k<n;k++){
            printf("* ");
        }
        printf("\n");
    }
}