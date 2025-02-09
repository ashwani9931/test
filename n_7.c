#include<stdio.h>
int fact(int x)
{
  int sum=1;
  while(x!=0)
  {
    sum*=x;
    x--;

  }
  return sum;

}
int main()
{
float xn,h,u,x0,y0;
int n,i,j;
printf("enter size of x and y: ");
scanf("%d",&n);
printf("enter value xn: ");
scanf("%f",&xn);
// printf("enter value h: ");
// scanf("%f",&h);

float x[n];
float y[n];

printf("enter the value of x: ");
for(i=0;i<n;i++)
{
    scanf("%f",&x[i]);
}
printf("enter value of y: ");
for(j=0;j<n;j++)
{
    scanf("%f",&y[j]);
}
u=(xn-x[0])/(x[1]-x[0]);


float d[n][n];
for(i=0;i<n;i++)
{
    d[i][0]=y[i];
}

for(j=1;j<n;j++)
{
    for(i=0;i<n-j;i++)
    {
   d[i][j]=d[i+1][j-1]-d[i][j-1];
    }
}
printf("X\t\tf(y)\t\t^y\t\t^2y\t\t^3y\n ");
for(i=0;i<n;i++)
{
    printf("%.2f\t\t",x[i]);
    for(j=0;j<n-i;j++)
    {
   printf("%.2f\t\t",d[i][j]);
    }
    printf("\n");
}
float sum=d[0][0];
for(i=1;i<n;i++)
{
    float term=1;
    for(j=0;j<i;j++)
    {
        term*=(u-j);
    }
    sum+=(term*d[0][i])/fact(i);
}

printf("f(%.2f)=%.4f",xn,sum);

}
