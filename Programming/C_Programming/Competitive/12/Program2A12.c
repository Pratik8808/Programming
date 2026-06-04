#include <stdio.h>
#define  TRUE 1
# define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;
    while(iNo<=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return TRUE;
        }
        iNo=iNo/10;

    }

}
int main()
{
    int iValue=0; 
    BOOL BRet=FALSE;
    printf("Enter number");
    scanf("%d",&iValue);
    BRet=ChkZero(iValue);
    if(BRet==TRUE)
    {
        printf("It contains Zero");

    }
    else
    {
        printf("It not contains Zero");
    }
}