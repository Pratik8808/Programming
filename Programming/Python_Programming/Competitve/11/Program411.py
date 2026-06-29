
def Reverse(No):
    ReverseNumber=0
    while(No!=0):
        Digit=int(No%10)
        ReverseNumber=ReverseNumber*10+Digit
        No=int(No/10)
    return ReverseNumber
def main():
    Value=int(input("Enter the Number "))
    Ret=Reverse(Value)
    print("Sum of the  Digits is",Ret)

if __name__=="__main__":
    main()