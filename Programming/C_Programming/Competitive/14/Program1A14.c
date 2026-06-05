
/*
Accept N numbers from user and count  freqency of even Numbers 
*/

#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr [],int iLength)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
           iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;

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
    iRet=CountEven(p,iSize);

    printf("Result is %d ",iRet);
    free(p);

    return 0;

}

