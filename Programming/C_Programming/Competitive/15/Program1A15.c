

/*
Accept N numbers from user and  accept one another nUnber as No , and check whether number is presnt or not
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr [],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return TRUE;
        }
    }
    return FALSE;

}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iValue=0;
    BOOL bReT=FALSE;

    printf("Enter the Number of Elemets");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));

    printf("Enter the number ");
    scanf("%d",&iValue);

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements   :\n",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Elements%d :  \n ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bReT=Check(p,iSize,iValue);

    if(bReT==TRUE)
    {

        printf("Number is present");
    }
    else
    {
        printf("Number is not Present");
    }


return 0;

}

