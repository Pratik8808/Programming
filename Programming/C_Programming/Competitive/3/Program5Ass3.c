#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOl;

BOOl ChkVowel(char cValue)
{
    if(cValue>='A' && cValue<='Z' )
    {
        // printf("Inside the %c  squence of if ",cValue);
        cValue=cValue+32;
    }
    if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
    {
        return TRUE;
    }
    return FALSE;

}

int main()
{
     char cValue='\0';
     BOOl bRet=FALSE;
    printf("Enter Character \n");
    scanf("%c",&cValue);
    bRet=ChkVowel(cValue);
    if(bRet==1)
    {
        printf("IT is vowel");
    }
    else
    {
        printf("it is not vowel");
    }


    return 0;
}