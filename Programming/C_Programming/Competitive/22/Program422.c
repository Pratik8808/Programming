// Input=4

//output-# 1 * # 2 * # 3 * # 4 *

#include <stdio.h>


void Pattern(int iNo)
{
   int iCnt=0;
 
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
     printf("%c\t%d\t%c\t",'#',iCnt,'*');
   }
}
int  main ()
{
    int iValue=0;
    printf("Enter the Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

}