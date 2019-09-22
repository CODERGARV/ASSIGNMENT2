#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,R;
    printf("Distance between 2 Coordinates\nInput 4 Numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("(%d,%d) and (%d,%d) are the 2 Coordinates",a,b,c,d);
    R=pow((a-c),2)+pow((b-d),2);
    printf("\nDistance= %.2f\n",pow(R,.5));
}