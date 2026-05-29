#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

void Pattern(int iNo)
{
    int iCnt=0;
BOOL bFlag=TRUE;
for(iCnt=1;iCnt<=iNo*2;iCnt++)
{
    if(bFlag==1)
    {
        printf("%c\t",'$');
        bFlag=FALSE;
    }
    else
    {
     printf("%c\t",'*');
     bFlag=TRUE;
    }

}
printf("\n");
    
}

int main ()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    Pattern(iValue);

   
    return 0;
}