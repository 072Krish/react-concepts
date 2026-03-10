#include <stdio.h>
int change(int*n){
    n=5;
}
int main(){
    int n=3;
    change (&n);
    printf("%d",n);
}
