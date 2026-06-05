# include <stdio.h>
# include <stdlib.h>



// time complexity of this program is o(nxd) nx10 which goes to O(n);
int Sum(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iSum=0;
    while(iNo!=0)
    {

        int iDigit=iNo%10;
        iSum+=iDigit;
        iNo/=10;

    }
    return iSum;
  
}

void Display(int Arr[],int iSize)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {  

        int iNumber=Arr[iCnt];
        int Summation=0;
        Summation=Sum(iNumber);
        printf("The Summation of element  %d is %d \n",Arr[iCnt],Summation);
     
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

