#include<stdio.h>
#include<math.h>
int main()
{
    int h,k,r,s,d;
    printf("To calculate chord length\nInput the values\n");
    scanf("%d%d%d%d",&h,&k,&r,&s);
    d=h-s;   //Distance of line from the center of circle
    printf("Chord Length: %.1f\n",sqrt(pow(r,2)-pow(d,2))*2);

}
