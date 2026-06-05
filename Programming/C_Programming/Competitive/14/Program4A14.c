
/*
Accept N numbers from user and return freqeuncy of 11 form it 
*/

#include <stdio.h>
#include <stdlib.h>

int Check(int Arr [],int iLength)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iReT=0;

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
    iReT=Check(p,iSize);

printf("Count of 11  is %d",iReT);

return 0;

}

