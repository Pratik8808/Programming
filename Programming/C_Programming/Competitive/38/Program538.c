#include <stdio.h>
typedef unsigned int UNIT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//Write a program Accept one number from user and  range of  Position from user.Toggle bits from that range
UNIT ToggleBitRange(UNIT iNO,int iStart,int iEnd) 
{
  UNIT iMask=0x01;
  for(int i=iStart;i<=iEnd;i++)
  {
    int itoggle=i-1;
    printf("the Counter of toggle is %d\n",itoggle);
    iNO=iNO^ (1<<itoggle);

  }
  printf("%b\n",iMask);
  return iNO;
 

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;

    int ipos=0;
    int ipos2=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
     printf("Enter Start Range  :");
    scanf("%d",&ipos);

     printf("Enter end range :");
    scanf("%d",&ipos2);
   
    iRet=ToggleBitRange(iValue,ipos,ipos2);
    
    printf("The toggle number is %d",iRet);

    



}