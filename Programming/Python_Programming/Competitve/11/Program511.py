
def Reverse(No):
    ReverseNumber=0
    OriginalNumber=No
    while(No!=0):
        Digit=int(No%10)
        ReverseNumber=ReverseNumber*10+Digit
        No=int(No/10)
    return(ReverseNumber==OriginalNumber)
def main():
    Value=int(input("Enter the Number "))
    Ret=Reverse(Value)
    if(Ret):
        print("The Number is Palindorm")
    else:
        print("The Number is not Palidrome")

if __name__=="__main__":
    main()