#include <stdio.h>
void struprx(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a'&& *str<='z')
        {
            *str=(char)*str-32;
        }
        str++;
    }

}
int main()
{
  char arr[50];

  printf("Enter String");
  scanf("%[^'\n']s",arr);

  struprx(arr);
  printf("modfied String is %s\n",arr);
    return 0;
}