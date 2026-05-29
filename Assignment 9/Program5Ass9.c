#include <stdio.h>

int CountDiff(int iNo)
{
    int iResultEven=1;
    int iResultOdd=1;

    while(iNo!=0)
    {
        int iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iResultEven=iResultEven+iDigit;
        }
        else if(iDigit%2!=0)
        {
            iResultOdd=iResultOdd+iDigit;
        }
        iNo=iNo/10;
    }
    return iResultEven-iResultOdd;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the number");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("%d",iRet);
}