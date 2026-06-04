    #include <stdio.h>


    int ChkZero(int iNo)

  
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
            if(iDigit==4)
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
        iRet=ChkZero(iValue);
        printf("The frequency of 4 is %d",iRet);
    }