#include <cstdio>
#include <math.h>

int main()
{
    std::puts("Enter a and b for `ax^2+bx+c=0`:");
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    float x;
    float x1;
    float x2;
    std::scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d < 0)
    {
        std::printf("no solutions\n");
    }

    if (d == 0)
    {
        x = -b / (2 * a);
        std::printf("solution: x = %f\n", x);
    }

    if (d > 0)
    {
        x1 = (-b + std::sqrt(d)) / (2 * a);
        x2 = (-b - std::sqrt(d)) / (2 * a);
        std::printf("solutions: x1 = %f, x2 = %f\n", x1, x2);
    }
}