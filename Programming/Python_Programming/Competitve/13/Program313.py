
def PerfectNumber(No):
    sum=0
    for i in range(1,int(No/2)+1):
        if(No%i==0):
            sum=sum+i

    return(sum==No)

def main():

    Value2=int(input("Enter the Number "))
    Result=PerfectNumber(Value2)

    if(Result):
        print("Perfect Number")
    else:
        print("Not Perfect Number")


if __name__=="__main__":
    main()