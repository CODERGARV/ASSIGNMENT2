#include<stdio.h>
#include<math.h>
int main()
{
      int a,b,c,d,e,f,x,y,z;
      float  s;
    printf("Input 6 Numbers\n");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    printf("(%d,%d),(%d,%d),(%d,%d) are the 3 Coordinates",a,b,c,d,e,f);

    x=pow(pow((a-c),2)+pow((b-d),2),.5);
    printf("\nx= %d\n",x); 

    y=pow(pow((a-e),2)+pow((b-f),2),.5);
    printf("\ny= %d\n",y);

    z=pow(pow((e-c),2)+pow((f-d),2),.5);
    printf("\nz= %d\n",z); 

    printf("x,y,z are the sides of the triangle\nArea of triangle\n");
    s=((float)(x+y+z)/(float)2);
    printf("\nArea= %.2lf\n",sqrt(s*(s-z)*(s-y)*(s-x)));
}