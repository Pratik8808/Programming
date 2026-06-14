
class Logic
{
    void findLargestDigit(int Number)
    {
        int iLargest=Number%10;
        while(Number!=0)
        {
            int iDigit=Number%10;
             if(iDigit>iLargest)
             {
                iLargest=iDigit;
             }
            Number=Number/10;
        }
        System.out.println("Largest Number is "+iLargest);
    }
}


class Program420{

public static void main (String A[]){

Logic s1=new Logic();
s1.findLargestDigit(83429);

}
}
