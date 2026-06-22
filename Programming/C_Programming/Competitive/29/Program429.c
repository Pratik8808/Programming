#include <stdio.h>
#define  TRUE 1
#define  FALSE 0

typedef int BOOL;
BOOL chkSmall(char ch)
{  BOOL flag=FALSE;
    if(ch>='a' && ch<='z')
    {
        flag=TRUE;
    }
    return flag;
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Character to check SmallCase or Not :\n");
    scanf("%c",&cValue);
    bRet=chkSmall(cValue);

    if(bRet)
    {
        printf("CHaracter is SmallCase \n");
    }
    else
    {
        printf("Character is not SmallCase\n");
    }

    return 0;

}