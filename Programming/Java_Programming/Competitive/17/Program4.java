class Logic
{
    void findMinium(int a,int b,int c){
    if(a>b && b<c)
    {
        System.out.println("B is smallest");

    }
   else if(a<b && a<c){
        System.out.println("A is smallest");
    }
    else if(c<a && c<b)
    {
        System.out.println("c is smallest");
    }
    else {
        System.out.println("A b c all are same");
    }
}
}

class Program4
{
    public static void main (String A[])
    {
        Logic obj=new Logic();
        obj.findMinium(112,112,112);
    }
}