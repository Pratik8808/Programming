#include <stdio.h>

void Pattern(int iRow,int iCol  )
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {  int a=1;
       int b=2;
        for(j=1;j<=iCol;j++)
        {
           if(i%2==0)
           {

               printf("%d\t",a);
               a=a+2;
           }
           else 
           {
            printf("%d\t",b);
            b=b+2;
           }
           
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter Number of rows  and Columns");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
}