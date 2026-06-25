#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL flag = FALSE;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            flag = TRUE;
            break;
        }
        str++;
    }

    return flag;
}

int main()
{
    char arr[50];
    char cValue2 = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character: ");
    scanf(" %c", &cValue2);

    printf("Enter the String: ");
    scanf(" %[^\n]", arr); 
    
    bRet = ChkChar(arr, cValue2);

    if (bRet == TRUE)
    {
        printf("Character is Present\n");
    }
    else
    {
        printf("Character is not Present\n");
    }

    return 0;
}