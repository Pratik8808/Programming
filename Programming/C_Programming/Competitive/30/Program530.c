#include <stdio.h>


void Display(char ch)
{
   printf("The Decimal Value is\t %d\n", ch);
   printf("The Octal  Value  is \t %o\n",ch);
   printf("The hexaDecimal is \t %X\n",ch);

}

int main()
{
    char cValue='\0';
    
    printf("Enter the Character ");
    scanf("%c",&cValue);

   Display(cValue);

   
}