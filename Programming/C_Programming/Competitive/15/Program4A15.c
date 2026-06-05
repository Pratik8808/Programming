
#include <stdio.h>
#include <stdlib.h>

void Range(int Arr [],int iLength,int iStart,int iEnd)
{
    int iCnt=0;
    int iLast=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]>=60 && Arr[iCnt]<=iEnd)
       {
        printf("%d \t",Arr[iCnt]);
       }
    }
    
   

}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iValue1=0;
    int iValue2=0;
    int iReT=0;

    printf("Enter the Number of Elemets");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));

    printf("Enter the Starting Point");
    scanf("%d",&iValue1);
      printf("Enter the Ending Point ");
    scanf("%d",&iValue2);


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
    printf("\n");
    Range(p,iSize,iValue1,iValue2);

   free(p);

return 0;

}




