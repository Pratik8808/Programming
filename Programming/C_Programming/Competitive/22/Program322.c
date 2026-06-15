// Input=5

//output-5 # 4 # 3 # 2 # 1 #

#include <stdio.h>


void Pattern(int iNo)
{
   int iCnt=0;
   int icount=1;
   for(iCnt=1;iCnt<=iNo*2;iCnt++)
   {
    if(iCnt%2==0)
    {
        printf("%c\t",'*');
    }
    else 
    {

        printf("%d\t",icount);
        if(icount<iNo)
        icount++;
    }
   }
}
int  main ()
{
    int iValue=0;
    printf("Enter the Number of Elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

}