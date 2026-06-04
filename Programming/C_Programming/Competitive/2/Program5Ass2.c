#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
    {
       return TRUE;
    }
    else  return FALSE;
}

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("enter the number\n");
    scanf("%d",&iValue);
    bRet=ChkEven(iValue);
    if(bRet)
    {
        printf("The Number %d is even number \n",iValue);

    }
    else
    {
        printf("Odd Number");
    }
}