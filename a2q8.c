#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float A;
    printf("Angle of Triangle\nType natural numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a,b,c>0)
    {
        if ((a>b) && (a>c))
        {
            A=(pow(b,2)+pow(c,2)-pow(a,2))/2*b*c;
            printf("Angle A: in radian: %.2f in degree: %.2f\n",acos(A),(float)(acos(A)*180)/(float)3.14);
        }
        else if ((b>a) && (b>c))
        {
            A=(pow(a,2)+pow(c,2)-pow(b,2))/2*a*c;
            printf("Angle A: in radian: %.2f in degree: %.2f\n",acos(A),(float)(acos(A)*180)/(float)3.14);
        }
        else if ((c>a) && (c>b))
        {
            A=(pow(b,2)+pow(a,2)-pow(c,2))/2*b*a;
            printf("Angle A: in radian: %.2f in degree: %.2f\n",acos(A),(float)(acos(A)*180)/(float)3.14);
        }
        else if ((a==b) && (b==c))
            printf("Angle A: in radian: %.2f in degree: %d\n",1.04,60);
    }  
    else
        printf("Type natural numbers\n");     
}