#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef  int BOOL;

BOOL ChkCaptial(char ch)
{
    BOOL flag=FALSE;
    if(ch>='A' && ch<='Z')
    {
        flag=TRUE;
    }
    return flag;
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Character to check Captial or Not :\n\n");
    scanf("%c",&cValue);
    bRet=ChkCaptial(cValue);

    if(bRet)
    {
        printf("Character is Captial\n \n");
    }
    else
    {
        printf("Character is not Captial\n\n");
    }

    return 0;

}
