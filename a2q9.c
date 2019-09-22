#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h,t,p,q,r,X,Y,Z;
    //float ;

    printf("To Find the area of the intersected circle\nLet ax + by + cz + d=0 be a plane and x^2 + y^2 + z^2 + ex + fy + gz + h=0 be a sphere\n");
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h); 

    t=((a*e/2)+(b*f/2)+(c*g/2)-d)/(pow(a,2)+pow(b,2)+pow(c,2));

    p=e/2+t;//
    q=f/2+t;//cooridnates of circle center(p,q,r)
    r=g/2+t;//

    X=sqrt(pow((e/2-p),2)+pow((f/2-q),2)+pow((q/2-r),2));//Distance of intersected circle center and sphere center
    
    Z=sqrt((pow(e,2)+pow(f,2)+pow(g,2))/4-h);//Radius of sphere

    Y=sqrt(pow(Z,2)-pow(X,2));//intersected circle radius

    printf("(Radius) of sphere: %d and circle: %d\n",Z,Y);
    printf("\nArea of circle: %.2f\n",pow(Y,2)*3.14);
}
