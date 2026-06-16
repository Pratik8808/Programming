#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int iCnt=1;
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,iCnt++)
        {
            printf("%d\t",iCnt);
            if(iCnt>=9)
            {
                iCnt=0;
            }
        }
        printf("\n");
    }

}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter number of rows  and Columns");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
}