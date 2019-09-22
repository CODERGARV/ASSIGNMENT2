#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    float z;
    printf("Distance of Point(a,b) and line cx+dy+e=0\nInput a,b,c,d,e respectively\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    z=sqrt(pow(c,2)+pow(d,2));
    printf("Distance= %.2f\n",(float)(a*c+b*d+e)/(float)z);
    return 0;
}