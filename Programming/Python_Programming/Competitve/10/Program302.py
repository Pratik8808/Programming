def SquareResult(No):
    Result=0
    Result=No*No
    return Result

def main():
    Value1=int(input("Enter the Number to square up"))
    Ret=0
    Ret=SquareResult(Value1)

    print("The Square of Number is ",Ret)


if __name__=="__main__":
    main()