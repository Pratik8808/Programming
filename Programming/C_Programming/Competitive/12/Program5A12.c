


/*
count frequncey of number  wwhich is less than 6

*/
    #include <stdio.h>


    int Count(int iNo)

  
    {
          if(iNo<0)
    {
        iNo=-iNo;
    }
        int iDigit=0;
        int iCnt=0;
        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit<6)
            {
            iCnt++;
            }
            iNo=iNo/10;

        }
        return iCnt;

    }
    int main()
    {
        int iValue=0; 
        int iRet=0;
        printf("Enter number");
        scanf("%d",&iValue);
        iRet=Count(iValue);
        printf("The frequency of less 6 number  is %d",iRet);
    }