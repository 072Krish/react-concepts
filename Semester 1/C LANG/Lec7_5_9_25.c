#include <stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,slope1,slope2;
    printf("Enter the Coordinates: ");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    slope1==slope2 ? printf("It is a straight Line") : printf("It does not forms a straight line");
}