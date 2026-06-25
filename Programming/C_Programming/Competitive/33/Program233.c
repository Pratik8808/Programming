#include <stdio.h>


int CountChar(char *str, char ch)
{

    int count=0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    return count++;
}

int main()
{
    char arr[50];
    char cValue2 = '\0';
    int iRet=0;

    printf("Enter the Character: ");
    scanf(" %c", &cValue2);

    printf("Enter the String: ");
    scanf(" %[^\n]", arr);
    
    iRet = CountChar(arr, cValue2);
    printf("The of %c is %d",cValue2,iRet);

    return 0;
}