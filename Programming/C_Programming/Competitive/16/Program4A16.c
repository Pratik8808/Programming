# include <stdio.h>
# include <stdlib.h>
#include <stdbool.h>


// time complexity of this program is o(nxd) nx10 which goes to O(n);
bool CheckNumber(int iNo)
{
    int iCnt=0;
    while(iNo!=0)
    {
        iNo=iNo/10;
        iCnt++;

    }
   if(iCnt==3)
   {
    return true;
   }
   else
   {
    return false;
   }
}

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {   bool bflag=false;
        int iNumber=Arr[iCnt];
        bflag=CheckNumber(iNumber);
        if(bflag==true)
        {
            printf("%d \t",Arr[iCnt]);
        }
         
    }
}



int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;
  

    printf("Enter the Number of Elements");
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
    Display(p,iSize);
free(p);

return 0;

}

