def PrintTable(No):
    for i in range(1,10):
        print(No*i,end =" ")


def main():
    Value1=int(input("Enter First Number"))
    PrintTable(Value1)


if __name__=="__main__":
    main()