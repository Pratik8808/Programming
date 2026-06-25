#include <stdio.h>

void strCpy(char *src , char *dest)
{
    
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;


    }
    *dest='\0';
 
    

}


int main()
{
    char cValue='\0';
    char arr[30];
    char brr[30];

    printf("enter the String \n");
    scanf("%[^'\n']s",arr);

    strCpy(arr,brr);

    printf("The value of Brr is %s",brr);

    return 0;
}