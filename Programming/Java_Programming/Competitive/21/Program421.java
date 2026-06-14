
class Logic
{
    void DisplayFactor(int iNumber)
    {
        int iCnt=0;
        int iCount=0;
        for(iCnt=1;iCnt<=iNumber/2;iCnt++)
        {
            if(iNumber%iCnt==0)
            {
                iCount++;
            }

        }
        System.out.println("The Count of Factor is of  :" +iNumber+" "+"is \t"+iCount);
    }
}


class Program421{

public static void main (String A[]){

Logic s1=new Logic();
s1.DisplayFactor(50);

}
}
