class Logic
{
    void sumOfDigits(int num)
    {
        int iSum=0;
        while(num!=0)
        {
            int iDigit=num%10;
            iSum+=iDigit;
            num=num/10;
        }

        System.out.println("Summation is : "+iSum);
    }
}

class Program
{
    public static void main (String A[])
    {
        Logic obj=new Logic();
        obj.sumOfDigits(1234);
    }
}