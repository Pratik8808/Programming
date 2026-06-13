
class Logic
{
    void CalculatePower(int Base,int Exp)
    {
        int iCnt=1;
        int iResult=1;
        for(iCnt=1;iCnt<=Exp;iCnt++)
        {
            iResult=iResult*Base;
        }

        System.out.println(iResult);
      
    }
}


class Program519{

public static void main (String A[]){

Logic s1=new Logic();
s1.CalculatePower(2,5);

}
}
