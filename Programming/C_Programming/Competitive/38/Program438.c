#include <stdio.h>
typedef unsigned int UNIT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

// Accept number bit 1 or second  input of postion from user 
int chkBit(UNIT iNO,int iLocation1,int iLocation2) 
{
  UNIT iMask1=0x01;
  UNIT imask2=0x01;
  iMask1=iMask1<<(iLocation1-1);
  imask2=imask2<<(iLocation2-1);
  BOOL flag=FALSE;

UNIT  iMask=iMask1 |imask2;

if((iMask & iNO)!=0)
{
  flag=TRUE;
}

  

    return flag;

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    BOOL bRet=FALSE;
    int ipos=0;
    int ipos2=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
     printf("Enter the Postion 1 :");
    scanf("%d",&ipos);

     printf("Enter the Postion 2 :");
    scanf("%d",&ipos2);
   
    bRet=chkBit(iValue,ipos,ipos2);

    if(bRet==1)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE ");
    }


    



}