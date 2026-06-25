#include <stdio.h>
int CountWhite(char *str)
{
    int iCount=0;
    while(*str !='\0')
    {
        if(*str==' ')
        {
            iCount++;
            
        }
        str++;
  
    }
      return iCount;
}

int main()
{
    char cValue='\0';
    char arr[50];
    int iRet=0;
    printf("Enter the String to count Spaces \n");
    scanf("%[^'\n']s",arr);

    iRet=CountWhite(arr);

    printf("The Count of the Spaces %d\n",iRet);

   
}