#include <stdio.h>

int DollarToINR(int iNo)
{
    int Dollar=70;
    return iNo*Dollar;
}  // Time Complexity is O(1);


int main()
{
   int iValue =0;
   int iRet=0;
   printf("Enter number USD \n");
   scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("Value of INR is %d",iRet);

}