
class Logic
{
    void ProductOfDigit(int Number)
    {
        int iProduct=1;
        while(Number!=0)
        {
            int iDigit=Number%10;
           iProduct*=iDigit;
            Number=Number/10;
        }
        System.out.println("Product is  "+iProduct);
    }
}


class Program121{

public static void main (String A[]){

Logic s1=new Logic();
s1.ProductOfDigit(83429);

}
}
