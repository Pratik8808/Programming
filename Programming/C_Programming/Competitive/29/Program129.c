#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkAplha(char ch)
{
    BOOL flag=FALSE;
    if((ch>='a' && ch<='z')||(ch>='A'  && ch<='Z'))
    {
        flag=TRUE;
    }
    return flag;
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    
    printf("Enter the Charcter\n ");
    scanf("%c",&cValue);

    bRet=chkAplha(cValue);
    if(bRet==TRUE)
    {
        printf("IT is Character\n");
    }
    else 
    {
        printf("IT is not Character ");
    }
    return 0;
}