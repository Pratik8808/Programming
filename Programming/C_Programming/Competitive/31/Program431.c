#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkVowel(char *str)
{
   BOOL flag=FALSE;
    while(*str !='\0')
    {
       if(*str=='A'||*str=='a'|| *str=='e'||*str=='E'||*str=='i'||*str=='I'|| *str=='u'||*str=='U')
       {
          flag=TRUE;
          break;
       }
       str++;
    
    }
    return flag;
}
int main()
{
    char CValue='\0';
    char Arr[50];
    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);
    BOOL bRet=FALSE;
    bRet=ChkVowel(Arr);
    if(bRet==1)
    {
        printf("TRUE\n");
    } 
    else
    {
        printf("FALSE\n");
    }


    return 0;
}