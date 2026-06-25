#include <stdio.h>
void strtogglex(char *str)
{
    while(*str !='\0')
    {
        if(*str>='a' &&  *str<='z')
        {
            *str=(char)*str-32;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str=(char)*str+32;
        }
      str++;
    }
}

int main()
{
    char cValue='\0';
    char arr[50];
    printf("Enter the String to toggle");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Toggle str Is %s\n",arr);

}