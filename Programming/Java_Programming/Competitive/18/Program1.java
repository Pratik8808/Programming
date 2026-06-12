class Logic
{
    void checkPrime (int num)
    {    int iCnt=0;
        boolean flag=false;
        for (iCnt=2;iCnt<num/2;iCnt++)
            {
                if(num%iCnt==0)
                {
                    flag=true;
             
                    break;
                }

                
            }
            if (flag==true)
            {
                System.out.println("The Number is not Prime");
            }
            else
            {
                System.out.println("tThe Number is prime");
            }
    }
}

class Program1
{
    public static void main(String[] args) 
    {
        Logic obj=new Logic();
        obj.checkPrime(17);
    }
}