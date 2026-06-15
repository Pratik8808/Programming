#include <stdio.h>

void Pattern(int iNo)
{
   char ch='\0';
   int iCnt=0;
   for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
   {
     printf("%c\t",ch);
   }
   printf("\t");
}
int  main ()
{
    int iValue=0;
    printf("Enter the Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

}