

/*
Accept N numbers from user and  accept one another nUnber as No , and return last occurence index of the no number
*/

#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr [],int iLength,int iNo)
{
    int iCnt=0;
    int iLast=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
        iLast=iCnt;
       }
    }
    return iLast;
   

}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iValue=0;
    int iReT=0;

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
    iReT=LastOcc(p,iSize,iValue);

    if(iReT==-1)
    {

        printf("Number is not present");
    }
    else
    {
        printf("Number is  Present at index as last occurrenc at  %d",iReT);
    }


return 0;

}

