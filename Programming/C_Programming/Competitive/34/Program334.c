#include <stdio.h>

void strCpYyCap(char *src, char* dest)
{
    while(*src!='\0')
    {
        if((*src>='A' && *src<='Z'))
        {
            *dest= *src;
             dest++;
        }
     
            src++;
    }
    dest='\0';

}

int main()
{
    char cValue='\0';
    char arr[30];
    char brr[30];

    printf("enter the String \n");
    scanf("%[^'\n']s",arr);

    strCpYyCap(arr,brr);

    printf("The value of Brr is %s\n",brr);

    return 0;
}