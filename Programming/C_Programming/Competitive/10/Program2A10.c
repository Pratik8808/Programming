/*
Write A Program which Accept Width & height of Rectangle from User
and Calcaulate it Area


*/

#include <stdio.h>
#define PI 3.14

double RectArea(float fWidth,float fheight)
{
    return fWidth*fheight;
}

int main()
{
    float fValue1 = 0.0f,fValue2=0.0;
    double dRet = 0.0;

    printf("Enter the width : ");
    scanf("%f", &fValue1);


    printf("Enter the height : ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("%lf\n", dRet);

    return 0;
}