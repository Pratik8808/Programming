def SumN(No):
    Sum=0
    for i in range(1,No+1):
        Sum=Sum+i
    return Sum


def main():
    Value1=int(input("Enter the Number to make Input Sum"))
    Ret=SumN(Value1)

    print("Sum of N number is ",Ret)    



if __name__=="__main__":
    main()