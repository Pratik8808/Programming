
class Logic
{
    void findLargestDigit(int Number)
    {
        int iSmallest=Number%10;
        while(Number!=0)
        {
            int iDigit=Number%10;
             if(iDigit<iSmallest)
             {
                iSmallest=iDigit;
             }
            Number=Number/10;
        }
        System.out.println("Smallest Number is "+iSmallest);
    }
}


class Program520{

public static void main (String A[]){

Logic s1=new Logic();
s1.findLargestDigit(83429);

}
}
