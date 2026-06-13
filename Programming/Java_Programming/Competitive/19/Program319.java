
class Logic
{
    void CheckDivisble(int Marks)
    {
        if(Marks%5==0 && Marks %11==0)
        {
            System.out.println("Number is Divisble");

        }
        else
        {
            System.out.println("NUmber is not Divisble by 11 and 5");
        }
    }
}


class Program319{

public static void main (String A[]){

Logic s1=new Logic();
s1.CheckDivisble(55);

}
}
