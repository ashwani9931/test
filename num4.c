#include <stdio.h>
double f(double x)
{
    return ((x * x) - 3);
}
int main()
{
    int n, i;
    double a, b, c;
    printf("enter the no of iteration n,a,b: \n");
    scanf("%d %lf %lf", &n, &a, &b);

    c = (a + b) / 2.0;
    printf("i\t\ta\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c)\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t%.2lf\t\t%.2lf\t\t", i, a, b);
        if (f(a) * f(b) >= 0 )
        {
            printf("root does not exist");
        }
        else
        {
            if (f(a) < 0 && f(b) > 0)
            {
                c = (a + b) / 2.0;
                if (f(c) > 0)
                {
                    b = c;
                }
                else
                {
                    a = c;
                }
            }
            else
            {
                c = (a + b) / 2.0;
                if (f(c) > 0)
                {
                    a = c;
                }
                else
                {
                    b = c;
                }
            }
        }
        printf("%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\t\t\n", f(a), f(b), c, f(c));
    }
}