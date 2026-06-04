#include <stdio.h>

int CountRange(int iNo)
{
    int iResult=1;
    while(iNo!=0)
    {
        int iDigit=iNo%10;
       iResult=iResult*iDigit;
        iNo=iNo/10;
    }
    return iResult;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number");
    scanf("%d",&iValue);
    iRet=CountRange(iValue);
    printf("%d",iRet);
}