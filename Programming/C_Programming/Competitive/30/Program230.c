#include <stdio.h>

void display(char ch)
{
    if(ch>='a'&& ch<='z')
    {
        ch=(char)(ch-32);

        printf("Capital of Character is %c ",ch);

    }
    else if(ch>='A' && ch<='Z')
    {
        ch=(char)(ch+32);
        printf("Small Character is %c\n",ch);
    }

}
int main()
{
    char cValue='\0';
    printf("Enter the Character\n");
    scanf("%c",&cValue);
    display(cValue);
    return 0;
}