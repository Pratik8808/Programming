
class Logic
{
    void displayGrade(int Marks)
    {
        if(Marks>100)
        {
            System.out.println("Invaild Marks");
        }
          else if(Marks>=80 && Marks<=90)
           {
               System.out.println("A");
           }

            else if(Marks>=91 && Marks<=100)
           {
               System.out.println("A++");
           }
           else if(Marks<=79 && Marks>=60)
           {
            System.out.println("B");
           }
           else if(Marks>=39 && Marks<=59)
           {
            System.out.println("C");
           }
           else {
            System.out.println("Failed");
           }
    }
}


class Program219{

public static void main (String A[]){

Logic s1=new Logic();
s1.displayGrade(20);

}
}
