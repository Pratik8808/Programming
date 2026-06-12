class Logic
{
    void CheckPalindrom(int num)
    {   int iOriginal=num;
        
        int iCopy=0;
        while(num!=0)
        {
            int iDigit=num%10;
             iCopy=iCopy*10+iDigit;
            num=num/10;
        }
        if(iCopy==iOriginal)
        {

            System.out.println("Palindrome Number");

        }
        else
        {
            System.out.println("number is not Palindorm");
        }

      
    }
}

class Program2
{
    public static void main (String A[])
    {
        Logic obj=new Logic();
        obj.CheckPalindrom(1291);
    }
}