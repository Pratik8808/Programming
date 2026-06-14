
class Logic
{
    void PrintDivisbleBy2and3(int iNumber)
    {
        int iCnt=0;
        int iCount=0;
        for(iCnt=1;iCnt<=iNumber;iCnt++)
        {
            if((iCnt%2==0)&& (iCnt%3==0))
            {
                System.out.println(iCnt);
            }

        }
        
    }
}


class Program521{

public static void main (String A[]){

Logic s1=new Logic();
s1.PrintDivisbleBy2and3(30);

}
}
