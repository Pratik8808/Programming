
class Logic
{
    void SumEvenNumbers(int Number)
    {
        int iCnt=1;
        int iResult=0;
        for(iCnt=2;iCnt<=Number;iCnt++)
        {
           if(iCnt%2==0)
           {
             iResult+=iCnt;

           }
        }
        System.out.println("This Even Sum of Number is "+iResult);
      
    }
}


class Program120{

public static void main (String A[]){

Logic s1=new Logic();
s1.SumEvenNumbers(20);

}
}
