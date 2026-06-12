class Logic
{
    void findMax(int a,int b)
    {   if(a>b)
    {
        System.out.println("A number is Greater than B");
    }
    else if(a<b)
    {
        System.out.println("B Is greated than A");
    }
      else{
        System.out.println("B and A Are same");
      }      
    }
}

class Program3
{
    public static void main (String A[])
    {
        Logic obj=new Logic();
        obj.findMax(12,11);
    }
}