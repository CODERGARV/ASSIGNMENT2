#include<stdio.h>
int main()
{
    int a,b;
    printf("slope of line ax+byc=0\nInput a,b\n");
    scanf("%d%d",&a,&b);
    printf("Slope= %.2f\n",(float)(-a)/(float)b);
}