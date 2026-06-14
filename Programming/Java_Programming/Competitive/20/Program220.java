
class Logic
{
    void PrintReverse(int Number)
    {
        while(Number!=0)
        {
            int iDigit=Number%10;
            System.out.println(iDigit);
            Number=Number/10;
        }
    }
}


class Program220{

public static void main (String A[]){

Logic s1=new Logic();
s1.PrintReverse(123);

}
}
