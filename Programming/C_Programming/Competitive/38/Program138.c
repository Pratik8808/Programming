#include <stdio.h>
typedef unsigned int UNIT;


// Accept number  which accept  two Number from the user and coutn numbers of On 1 bits in it without using % and / opertor
UNIT CountOne(UNIT iNo) 
{
   UNIT Mask = 1;
   UNIT Count=0;

for(int i = 1; i <= 32; i++)
{
    if((iNo & Mask) == Mask)
    {
        Count++;
    }

    Mask = Mask << 1;
}
return Count;
 
}
int main()
{
    int iValue= 0;

    int iPos=0;
    printf("Enter the Number :");
    scanf("%d",&iValue);
    int iRet=CountOne(iValue);  

    



}