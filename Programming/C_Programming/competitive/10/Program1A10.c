/*
Write a Program Which Accept Radiu of Circle from user 
and  calcaulate its Area consider value of PI 3.14



*/

# include <stdio.h>
# define PI 3.14

double CircleArea (float fRadius )
{
   return fRadius*PI*PI;
}

int main ()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter The Radius");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("%d",dRet);
    return 0;
    
}