    #include <stdio.h>

    void Pattern(int iRow,int iCol  )
    {
        int i=0;
        int j=0;
        int iCnt=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            // printf("%d,%d\t",i,j);

            if((i==j)||(i==iRow)||(i==1)||(j==1)||j==iCol)
            {
                printf("%c\t",'*');
            }
            // else if(i<j)
            // {
            //     printf("%c\t",'*');
            // }
            else
            {
                printf("%c\t",' ');
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