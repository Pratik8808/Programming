def OddNumber(No):
    
    for i in range(1,No+1):
        if(i%2!=0):
            print(i, end=" ")
   


def main():
    Value1=int(input("Enter the Number : "))
    OddNumber(Value1)

    



if __name__=="__main__":
    main()