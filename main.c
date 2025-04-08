#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2;

    // scanf("%lf,%lf,%lf", &a, &b, &c);
    a = 1;
    b = 4;
    c = 3;

    d = sqrt(b * b - 4 * a * c);
    x1 = (-b + d) / 2;
    x2 = (-b - d) / 2;

    printf("x1=%lf,x2=%lf\n", x1, x2);

    return 0;
}
