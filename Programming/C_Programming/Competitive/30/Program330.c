#include <stdio.h>

void Display(char ch)
{
  if(ch>='a' && ch<='z')
  {
    char cCnt='\0';
    for(cCnt=ch; cCnt>='a';cCnt--)
    {
        printf("%c\t",cCnt);
    }
  }
  else if(ch>='A' && ch<='Z')
  {
    char cCnt='\0';
    for(cCnt=ch;cCnt<='Z';cCnt++)
    {
        printf("%c\t",cCnt);
    }
  }
  else 
  {
    printf("Not a Character ");
  }

}

int main()
{
    char cValue='\0';

    printf("Enter the Character ");
    scanf("%c",&cValue);

    Display(cValue);
}