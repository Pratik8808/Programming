class Logic
{
    void checkPerfectSquare(int num)
    {
        int root = (int)Math.sqrt(num);

        if(root * root == num)
        {
            System.out.println(num + " is a Perfect Square");
        }
        else
        {
            System.out.println(num + " is Not a Perfect Square");
        }
    }
}

class Program320
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPerfectSquare(25);
    }
}