#include<stdio.h>
int fact(int x)
{
   int f=1;
    while(x!=0)
    {
        f*=x;
        x--;
    }
    return f;

}
int main()
{
 float xn,u,x0,y0;
 int n,i,j;
 printf("enter size of x and y: ");
    scanf("%d", &n);
    printf("enter value xn: ");
    scanf("%f", &xn);
    float x[n];
    float y[n];
    printf("enter the value of x: ");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("enter value of y: ");
    for (j = 0; j < n; j++)
    {
        scanf("%f", &y[j]);
    }
    
    u=(xn-x[n-1])/(x[1]-x[0]);
  
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
    printf("differenace table\n");
    printf("x\t\ty\t\ty^\t\ty^2\t\ty^3\t\ty^4\n");
    for(i=0;i<n;i++)
    {
        printf("%.2f\t\t",x[i]);
        for(j=0;j<n-i;j++)
        {
            printf("%.2f\t\t",d[i][j]);
        }
        printf("\n");
        
    }
    float sum=d[n-1][0];
    for(i=1;i<n;i++)
    {
        float t=1;
        for(j=0;j<i;j++)
        {
            t*=(u+j);
        }
        sum+=(t*d[n-i-1][i])/fact(i);
    }
    printf("y(%.2f)=%.2f",xn,sum);
    

}