#include <stdio.h>

int Factorial (int iNo)
{
    int iResult=1;
    while(iNo>=1)
    {
        iResult=iResult*iNo;
        iNo--;

    }
    return iResult;
}


int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet=Factorial(iValue);
    printf("Factorial of Number is %d",iRet);

    return 0;
}