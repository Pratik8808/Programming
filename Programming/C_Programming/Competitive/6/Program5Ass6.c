#include <stdio.h>

void Table (int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=10;
    while(iCnt>=1)
    {
        int iRet=iNo*iCnt;
        printf("%d\t",iRet); // Time Complexity O(1) as it goes 
        iCnt--;

    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}