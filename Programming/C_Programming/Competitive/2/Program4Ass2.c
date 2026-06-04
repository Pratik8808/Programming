#include <stdio.h>

void Display (int iNo,int iFrequency)
{
    int i=0;
    for(i=0;i<iFrequency;i++)
    {
        printf("%d\t",iNo);
        
    }
    printf("\n");
      
}
int main  ()
{
    int iValue = 0;
    int iCount=0;

    printf("Enter the number\n ");
    scanf("%d",&iValue);
 printf("Enter the Frequency");
  scanf("%d",&iCount);
  Display(iValue,iCount);
    return 0;
}