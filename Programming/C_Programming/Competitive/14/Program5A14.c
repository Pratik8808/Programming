/*
Accept N Number from the user and accept one another number as NO return Frequency of NO form it
*/

#include <stdio.h>
#include <stdlib.h>

int frequency (int Arr[],int iLength ,int iNo)
{
    int iFreq=0;
  int iCnt=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]==iNo)
    {
     iFreq++;
    }
  }
  return iFreq;
}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iReT=0;
    int iNo=0;

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
  
    iReT=frequency(p,iSize,66);

printf("Count of 66  is  %d",iReT);

return 0;

}