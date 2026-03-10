#include<stdio.h> 
int main(){
    int i,j,n,stars;
    printf("enter number of rows");
    scanf("%d",&n);
    for (i=1;i<=2*n-1;i++){
         if(i<=n)
         stars=i; 
         else
         stars=2*n-i;
         for(j=1;j<=stars;j++){
             printf("*");
         }
         printf("\n");
    }
}