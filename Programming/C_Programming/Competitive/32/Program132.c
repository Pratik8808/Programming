#include <stdio.h>
void strlwrx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A'&& *str<='Z')
        {
            *str=(char)*str+32;
        }
        str++;
    }

}
int main()
{
  char arr[50];

  printf("Enter String");
  scanf("%[^'\n']s",arr);

  strlwrx(arr);
  printf("modfied String is %s",arr);
    return 0;
}