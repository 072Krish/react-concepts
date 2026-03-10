#include <stdio.h>
int main()
{
    float p,r,t,simp;
    printf("Enter p: ");
    scanf("%f",&p);
    printf("Enter r: ");
    scanf("%f",&r);
    printf("Enter t: ");
    scanf("%f",&t);
    simp=p*r*t;
    printf("Simple interest is: %f",simp/100);
}