/*
Accept N Number from the User  and return Difference betweeen summation of the  of even and  odd elements

*/

#include <stdio.h>
#include <stdlib.h>

int Differnce(int Arr[],int iSize)
{
    int iEven=0;
    int iOdd=0;
    for(int i=0;i<iSize;i++)
    {
        if(Arr[i]%2==0)
        {
            iEven+=Arr[i];

        }
        else 
        {
            iOdd+=Arr[i];
        }
    }
    return iEven-iOdd;
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
    iRet=Differnce(p,iSize);
    printf("Summation of even and odd number is %d",iRet);
    return 0;

}