def Factorial(No):
    Fact=1
    for i in range(1,No+1):
        Fact=Fact*i
   
    return Fact


def main():
    Value1=int(input("Enter the Number : "))
    Ret=Factorial(Value1)

    print("Factorial of N number is ",Ret)    



if __name__=="__main__":
    main()