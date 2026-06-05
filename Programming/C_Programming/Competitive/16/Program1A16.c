

/*
Accept N numbers from user and  accept one another nUnber as No , and return largest Number
*/

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Maximum(int Arr [],int iLength)
{
    int iCnt=0;
    int iMax=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]>iMax){
        iMax=Arr[iCnt];
       }
    }
    return iMax;

}

int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
    int iRet=0;

    printf("Enter the Number of Elemets");
    scanf("%d",&iSize);
    p=(int*)malloc(iSize*sizeof(int));

 

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
    iRet=Maximum(p,iSize);

    printf("Largest Number is %d",iRet);


return 0;

}

