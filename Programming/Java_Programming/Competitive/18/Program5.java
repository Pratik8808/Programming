
class Logic
{
    void CheckSign(int num)
    {     if(num==0)
    {
        System.out.println("Number is zero");
    }
    else if(num<0)
    {
        System.out.println("number is Negative Number");
    }
    else
    {
        System.out.println("number is Postive Number ");
    }
       
       

   
           
            
    }
}

class Program5
{
    public static void main(String[] args) {
        
        Logic obj=new Logic();
       obj.CheckSign(-9999);
   
    }
}
