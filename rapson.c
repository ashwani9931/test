
#include <stdio.h>
#include<math.h>
int e=2.71;
float f(float xn)
{
    return (pow(e,xn)-(2*xn)-1);
    
}
float fd(float xn)
{
    return (pow(e,xn)-2);
}
int main()
    
{
    float xn,xn1;
    int i,n;
    printf("enter xn");
    scanf("%f",&xn);
    printf("enter no. of iteration: ");
    scanf("%d",&n);
    printf("i\t\txn\t\tf(xn)\t\tfd(n)\t\txn1");
    for(i=1;i<=n;i++)
    {
        xn1=xn-(f(xn)/fd(xn));
        printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",i,xn,f(xn),fd(xn),xn1);
        xn=xn1;
    }
    printf("\nApproximate root after %d iterations: %.6f\n", n, xn);
    return 0;
}