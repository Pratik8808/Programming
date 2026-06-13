
class Logic
{
    void PrintDigit(int Marks)
    {
        while(Marks!=0)
        {
            int iDigit=Marks%10;
            System.out.println(iDigit);
            Marks=Marks/10;
        }
    }
}


class Program419{

public static void main (String A[]){

Logic s1=new Logic();
s1.PrintDigit(23334);

}
}
