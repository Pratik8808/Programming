#include <stdio.h>



int LastOccur(char *str, char ch)
{
    int iCount=0;
    int iCount2=-1;

    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCount2=iCount;
         
        }
        iCount++;
        str++;
    }
    return iCount2;

    

}

int main()
{
    char arr[50];
    char cValue='\0';
    int iRet=0;

    printf("Enter the String\n");
    scanf(" %[^'\n']s",arr);

    printf("Enter the Character \n");
    scanf(" %c",&cValue);

   iRet=LastOccur(arr,cValue);

 printf("The occurence last  of Character %c is at index %d",cValue,iRet);

    return 0;
}