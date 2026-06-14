
class Logic
{
    void CountEvenOrOddRange(int Number)
    {
        int iEven=0;
        int iOdd=0;
        int iCnt=0;
        for(iCnt=1;iCnt<=Number;iCnt++)
        {
            if(iCnt%2==0)
            {
                iEven++;
            }
            else 
            {
                iOdd++;
            }

        }
       
        System.out.println("Count of Odd is  "+iOdd);
        System.out.println("Count of Even is  "+iEven);
    }
}


class Program221{

public static void main (String A[]){

Logic s1=new Logic();
s1.CountEvenOrOddRange(50);

}
}
