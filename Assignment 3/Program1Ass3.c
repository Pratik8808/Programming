#include <stdio.h>

void PrintEven (int iNo)
{
    if(iNo<=0)
    {
        return;
    }
  
   int iCounter=2;
   while(iNo>=1)
   {
      if(iCounter%2==0)
      {
        printf("%d\t",iCounter);
        iNo--;
      

      }
      iCounter++;
   }
}

int main()
{
    int iValue=0;
    printf("Enter the Number \n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}