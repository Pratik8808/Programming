#include <stdio.h>
#define TRUE 1
#define FALSE 0
 typedef int BOOL;

BOOL Display(char ch)
{
    BOOL flag=FALSE;
    if((ch>='!'&& ch<='/')||(ch>=':'&&ch<='@')||(ch>='[' && ch<='`'))
    {
            flag=TRUE;
           
    }
    return flag;
  
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter the Character ");
    scanf("%c",&cValue);

   bRet=Display(cValue);

   if(bRet)
   {
    printf("It special Character\n");

   }
   else
   {
    printf("it Not Special Character \n");
   }
}