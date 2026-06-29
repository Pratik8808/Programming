
def SumDigit(No):
    Sum=0
    while(No!=0):
        Digit=int(No%10)
        Sum=Sum+Digit
        No=int(No/10)
    return Sum
def main():
    Value=int(input("Enter the Number "))
    Ret=SumDigit(Value)
    print("Sum of the  Digits is",Ret)

if __name__=="__main__":
    main()