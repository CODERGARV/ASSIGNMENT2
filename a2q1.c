#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double s;
    printf("For area of triangle\nenter 3 sides= \n");
    scanf("%d%d%d",&a,&b,&c);
    s=((double)(a+b+c)/2);
    printf("\nArea= %.2f\n%.2f",sqrt(s*(s-a)*(s-b)*(s-c)),s);
}
