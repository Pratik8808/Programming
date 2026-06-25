#include <stdio.h>



int ReverseString(char *str)
{
    int iCount=0;
    int iCount2=-1;

    char *Start=NULL;
    char *End=NULL;

    Start=str;
    End=str;
    
    while(*str!='\0')
    {
        str++;
    }
    str--;

    while(Start<str)
    {
       char temp=*str;
       *str=*Start;
       *Start=temp;
        
       Start++;
       str--;
    }
    printf("\n");
    

}

int main()
{
    char arr[50];
    char cValue='\0';


    printf("Enter the String\n");
    scanf(" %[^'\n']s",arr);

    // printf("Enter the Character \n");
    // scanf(" %c",&cValue);

 ReverseString(arr);

 printf("Reverse of the String %s \n",arr);

 

    return 0;
}