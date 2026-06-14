
class Logic
{
    void DisplayFactor(int iNumber)
    {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNumber/2;iCnt++)
        {
            if(iNumber%iCnt==0)
            {
                System.out.println(iCnt+"\t");

            }

        }
    }
}


class Program321{

public static void main (String A[]){

Logic s1=new Logic();
s1.DisplayFactor(50);

}
}
