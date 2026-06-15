// Input=8

//output-2 4 6 8 10 12 14  16

#include <stdio.h>


void Pattern(int iNo)
{
   int iCnt=0;

 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
    int iResult=2*iCnt;
    printf("%d\t",iResult);
 }
}
int  main ()
{
    int iValue=0;
    printf("Enter the Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

}