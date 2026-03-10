#include<stdio.h>
void result(int x)
{
    if (90 < x && x < 100){
        printf("grade A \n");
    }
    if (80 < x && x < 90){
        printf("grade B \n");
    }
    if (70 < x && x < 80){
        printf("grade C \n");
    }
    if (60 < x && x < 50){
        printf("grade D \n");
    }
    if (50 < x && x < 60){
        printf("grade E \n");
    }
    if (0 < x && x < 50){
        printf("grade F \n");
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    result(x);
    result(45);
    result(89);
    result(34);
    result(81);
    result(78);
    result(99);
}