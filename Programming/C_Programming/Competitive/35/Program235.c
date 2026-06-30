#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int  UNIT;
typedef int BOOL;
 // Check bit 5 & 18 postion on or off
BOOL ChkBit(UNIT iNo)
{
   UNIT iMask1=0x01;
   UNIT iMask2=0X01;
   iMask1=iMask1<<18-1;
   iMask2=iMask2<<5-1;
   UNIT iMask=iMask1 | iMask2;
  
   UNIT Result=iMask & iNo;
   BOOL flag=FALSE;
   if(Result==iMask)
   {
    flag=TRUE;
    
   }
   return flag;

}

int main()
{
  UNIT Value=0;
  UNIT iMask=0x01;
  printf("Enter the Number \n");
  scanf("%d",&Value);
BOOL Result=ChkBit(Value);

if(Result==TRUE)
{

    printf(" Bit is on 5 & 18");
}
else 
{
    printf("Bit 5 and 18 is off");
}




}