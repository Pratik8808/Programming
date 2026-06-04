#include <stdio.h>
#include <stdlib.h>

void DisplayArr(int Arr [],int iLength)
{
     for(int i=0;i<iLength;i++)
    {
       if(Arr[i]%5==0)
       {
        printf("%d\t",Arr[i]);
       }
    }
}
int main()
{
    int iSize=0, iRet=0;
    int iCnt=0;

    int *p=NULL;

    printf("Enter Number of elemets ");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to Locate the memory");
        return -1;
    }
    printf("Enter %d  number",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);


    }
   DisplayArr(p,iSize);
  free(p);
    return 0;

}