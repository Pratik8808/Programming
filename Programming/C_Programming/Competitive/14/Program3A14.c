
/*
Accept N numbers from user and check if 11 is present in it or not
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr [],int iLength)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
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
    BOOL bRET=FALSE;

    printf("Enter the Number of Elemets");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d elemets ",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter the Elements:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    bRET=Check(p,iSize);
if(bRET==TRUE)
{
    printf("11is Present \n");

}
else {
    printf("11 is not Present \n");
}
    free(p);

    return 0;

}

