#include <stdio.h>

void DisplayCovert(char Cvalue)
{
 if(Cvalue>='A' && Cvalue<='Z')
 {
    Cvalue=Cvalue+32;
    printf("%c\n \t",Cvalue);
    

 }
 else if(Cvalue>='a' && Cvalue<='z')
 {
    printf("%c",Cvalue-32);
 }
}

int main ()
{
    char cValue='\0';
    printf("Enter Character \n");
    scanf("%c",&cValue);

    DisplayCovert(cValue);
}