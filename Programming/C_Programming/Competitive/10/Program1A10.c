#include <stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    return fRadius * fRadius * PI;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter The Radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("%lf\n", dRet);

    return 0;
}