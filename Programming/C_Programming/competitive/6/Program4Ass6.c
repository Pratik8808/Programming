#include <stdio.h>

void Table (int iNo)
{
    int iCnt=1;
    while(iCnt<=10)
    {
        int iRet=iNo*iCnt;
        printf("%d\t",iRet); // Time Complexity O(1) as it goes 
        iCnt++;

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