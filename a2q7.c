#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,p,q,r;
    printf("Intersection point of lines ax+by+c=0 and px+qy+r=0\n Input a,b,c,p,q,r respectively\n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&q,&r);
    printf("point: (%.1f,%.1f)\n",(float)(r*b-c*q)/(float)(a*q-b*p),(float)(r*a-c*p)/(float)(p*b-q*a));
    
}