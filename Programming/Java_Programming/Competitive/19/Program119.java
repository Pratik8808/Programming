
class Logic
{
    void CheckLeapYear(int years)
    {
            if(years%400==0)
            {
                System.out.println("Number is Leap Year "+years);
            }
            else if (years%100==0)
            {
                System.out.println("Number is not a leap year");
            }
            else if (years % 4 == 0) {
      System.out.println("is a leap year."+ years);
   }
   // all other years are not leap years
   else {
      System.out.println("is not a leap year." +years);
   }
    }
}


class Program119{

public static void main (String A[]){

Logic s1=new Logic();
s1.CheckLeapYear(2018);

}
}
