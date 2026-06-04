#include <stdio.h>
typedef int BOOL;
#define True 1;
# define FALSE 0
BOOL Check (int iNo)
{
   if((iNo%5)==0)
   {
     return True;
   }
   else
   {
      return FALSE;
   }
}
int main ()
{
   int iValue=0;
   BOOL bRet=FALSE;
   printf("Enter the number \n");
   scanf("%d",&iValue);
   bRet=Check(iValue);
   if(bRet==1)
   {
      printf("Divisble by 5");
   }
   else {
      printf("Not divisble by 5");
   }

    return 0;
}