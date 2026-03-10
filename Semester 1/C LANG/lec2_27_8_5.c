#include<stdio.h>
int main()
{
    float r,s,a,l,b,h;

    printf("Enter the value of r:");
    scanf("%f",&r);

    printf("Enter the value of s:");
    scanf("%f",&s);

    printf("Enter the value of a:");
    scanf("%f",&a);

    printf("Enter the value of l:");
    scanf("%f",&l);

    printf("Enter the value of b:");
    scanf("%f",&b);

    printf("Enter the value of h:");
    scanf("%f",&h);

    printf("Area of Square");
    printf("%f/n/n",s*s);

    printf("Area of Circle");
    printf("%f/n/n",3.14*r*r);

    printf("Volume of Cube");
    printf("%f/n/n",a*a*a);

    printf("Volume of cuboid");
    printf("%f/n/n",l*b*h);

    printf("Volume of Cylinder");
    printf("%f/n/n",3.14*r*r*h);

    printf("Volume of Sphere");
    printf("%f/n/n",(4*3.14*r*r*r)/3);

    printf("Volume of Cone");
    printf("%F/n/n",(1*3.14*r*r*h)/3);

    printf("Volume of Hemisphere");
    printf("%f/n/n",(2*3.14*r*r*r)/3);
}