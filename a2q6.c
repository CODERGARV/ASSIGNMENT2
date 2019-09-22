#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("To print Circle's {X^2+y^2+ax+bx+c} center and radius\nInput a,b,c respectively\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("center:(%.1f,%.1f) and radius= %.2f\n",
     (float)(-a)/2,(float)(-b)/2,   sqrt((float)(pow(a,2)+pow(b,2))/4-c));
}