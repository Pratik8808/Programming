#include <stdio.h>

void MultipleDisplay (int iNo)
{
    int iCnt=iNo;
    int iCounter=5;
    while(iCounter>0)
    {
        if(iCnt%iNo==0)
        {
            printf("%d\t",iCnt);
            iCounter--;
            iCnt++;
        }
        iCnt++;
    }
}

int main ()
{
    int iValue=0;
  
    printf("Enter the number\n");
    scanf("%d",&iValue);

     MultipleDisplay(iValue);
   
    return 0;
}