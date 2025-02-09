

#include <stdio.h>
#include<math.h>

float f(float x)
{
    return ((x*x*x)+(x*x)+x+7);
}
int main()
{
    float a,b,c;
    int i,n;
    printf("enter a,b");
    scanf("%f %f",&a,&b);
    printf("enter no. of itreation n: ");
    scanf("%d",&n);
      c=a-((f(a)*(b-a))/(f(b)-f(a)));
  printf("i\t\ta\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c)");  
    for(i=1;i<=n;i++)
    
    {
        printf("\n%d\t\t%.2f\t\t%.2f\t\t",i,a,b);
        if(f(a)*f(b)>=0)
        {
          printf("root not exit");
        }
        else
             {
                   c=a-((f(a)*(b-a))/(f(b)-f(a)));
                   if(f(a)<0 && f(b)>0)
                   {
                   if(f(c)>0)
                   {
                       b=c;
                   }
                   else
                   {
                       a=c;
                   }
                   }
                   else
                   {
                         c=a-((f(a)*(b-a))/(f(b)-f(a)));
                         if(f(c)>0)
                         {
                             a=c;
                         }
                         else
                         {
                             b=c;
                         }
                   }
             }
             printf("%.2f\t\t%.2f\t\t%.2f\t\t%.2f",f(a),f(b),c,f(c));
    }
    printf("%.2f",c);
}