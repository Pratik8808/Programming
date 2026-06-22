#include <stdio.h>
#define  TRUE 1
#define  FALSE 0

typedef int BOOL;
BOOL chkDigit(char ch)
{  BOOL flag=FALSE;
    if(ch>='0' && ch<='9')
    {

        flag=TRUE;
    }
    return flag;
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Character to check Captial or Not :\n");
    scanf("%c",&cValue);
    bRet=chkDigit(cValue);

    if(bRet)
    {
        printf("CHaracter is between 0-9 Digit\n");
    }
    else
    {
        printf("CHaracter is not  between 0-9 Digit\n");
    }

    return 0;

}