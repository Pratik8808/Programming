def countDigits(No):
    Count=0
    while(No!=0):
        Count=Count+1
        No=int(No/10)
       
    return Count


def main():
    Value1=int(input("Enter the Number : "))
    Ret=countDigits(Value1)

   
    print("The Number of digit Count is",Ret)
   

    



if __name__=="__main__":
    main()