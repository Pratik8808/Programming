def CubeResult(No):
    Result=0
    Result=No*No*No
    return Result

def main():
    Value1=int(input("Enter the Number to Cube up"))
    Ret=0
    Ret=CubeResult(Value1)

    print("The Cube of Number is ",Ret)


if __name__=="__main__":
    main()