
class Logic
{
    void sumEvenOddDigits(int num)
    {    int iCnt=0;
       
       int iEvenSum=0;
       int iOddSum=0;

    while(num!=0)
    {
        int iDigit=num%10;
        if(num%2==0)
        {
            iEvenSum+=iDigit;


        }
        else
        {
            iOddSum+=iDigit;
        }
        num=num/10;
    }
       System.out.println("The Sum of the Even Digits are : "+iEvenSum);
       System.out.println("The Sun of Odd digits is :"+iOddSum);
  
           
            
    }
}

class Program4
{
    public static void main(String[] args) {
        
        Logic obj=new Logic();
       obj.sumEvenOddDigits(123456);
   
    }
}
