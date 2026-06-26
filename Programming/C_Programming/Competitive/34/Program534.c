#include <stdio.h>

void strCatX(char *src, char *dest)
{
    while(*src!='\0')
    {
        src++;
    }
    *src=' ';
    src++;
    while(*dest)
    {
        *src=*dest;
        src++;
        dest++;
    }
    
    *dest='\0';

}

int main()
{
    char cValue='\0';
    char arr[50];
    char brr[30];

    printf("enter the String \n");
    scanf("%[^'\n']s",arr);

    printf("Enter String Second which to will concate \n");
    scanf(" %[^'\n']s",brr);

    strCatX(arr,brr);

    printf("The value of Brr is %d\n",*arr);

    return 0;
}