#include <stdio.h>

void strNCpyX(char *src , char *dest,int iCnt)
{
    
    while(*src!='\0' && iCnt!=0)
    {
        *dest=*src;
        dest++;
        src++;
        iCnt--;


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

    strNCpyX(arr,brr,2);

    printf("The value of Brr is %s\n",brr);

    return 0;
}