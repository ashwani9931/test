#include <stdio.h>
double f(double x, double y)
{
    return ((y - x) / (y + x));
}
int main()
{
    double x, y, h, xn, y1, f1, n, k1, k2, k3, k4;
    printf("enter x: ");
    scanf("%lf", &x);
    printf("\nenter y: ");
    scanf("%lf", &y);
    printf("\nenter xn: ");
    scanf("%lf", &xn);
    printf("\nenter n: ");
    scanf("%lf", &n);
    h = (xn - x) / n;
    printf("\nx\t\ty\t\tf(x,y)\t\ty1\n");
    for (int i=0; i <= n; i++)
    {
        f1=f(x,y);
        k1 = h * f(x, y);
        k2 = h * f(x + h / 2, y + k1 / 2);
        k3 = h * f(x + h / 2, y + k2 / 2);
        k4 = h * f(x + h , y + k3);
        y1 = y + (1.0 / 6.0) * (k1 + 2 * k2+ 2 * k3+ k4);
        printf("%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n", x, y, f1, y1);
        x+=h;
        y=y1;
    }
}