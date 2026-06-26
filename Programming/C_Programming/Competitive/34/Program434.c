#include <stdio.h>

void strCpySmall(char *src, char* dest)
{
    while(*src!='\0')
    {
        if((*src>='a' && *src<='z'))
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

    strCpySmall(arr,brr);

    printf("The value of Brr is %s\n",brr);

    return 0;
}