#include <stdio.h>
typedef unsigned int UNIT;
typedef int BOOL;
//write Program and Display  pOstion of common on bits from the two numbers
int commonBits(UNIT iNO,int iNo2) 
{
    int iPost=1;
    int iMask=iNO & iNo2;
    while(iMask!=0)
    {
        UNIT temp=0x01;
        if((iMask &temp)==temp)
        { 
           
            printf("%d\t",iPost);

        }
        iPost++;
        iMask=iMask>>1;
    }


  

}
int main()
{
    int iValue= 0;
    UNIT iRet=0;
    int iPos=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
    printf("Enter the Second Number");
    scanf("%d",&iPos);
    commonBits(iValue,iPos);
    
    // printf("Count is of common bits %d",iRet);


    



}