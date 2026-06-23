#include <stdio.h>

void Reverse (char *str)
{
   char *start=NULL;
   start=str;
    while(*str !='\0')
    {
        str++;
     
    
    }
    str--;
    while(start<=str)
    {
        printf("%c",*str);
        str--;
    }

}
int main()
{
    char CValue='\0';
    char Arr[50];
    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);
    Reverse(Arr);


    return 0;
}