#include<stdio.h>
double f(double x,double y)
{
    return (x-y);

}
int main()
{
    double x,y,h,xn,y1,f1;
    printf("enter x: ");
    scanf("%lf",&x);
     printf("\nenter y: ");
    scanf("%lf",&y);
     printf("\nenter xn: ");
    scanf("%lf",&xn );
     printf("\nenter h: ");
    scanf("%lf",&h);
    printf("\nx\t\ty\t\tf(x,y)\t\ty1\n");
    for(x=x;x<=xn;x+=h)
    {
      f1=f(x,y);
      y1=y+(h*f1);
      printf("%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",x,y,f1,y1);
      y=y1;
    }


}