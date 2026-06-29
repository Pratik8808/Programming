def CheckPrime(No):
    for i in range(2,int(No/2)):
        flag=False
        if(No%i==0):

            flag=True
            break
    
    return flag
        


def main():
    Value1=int(input("Enter the Number : "))
    Ret=CheckPrime(Value1)

    if(Ret==True):
        print("The Number is  not Prime")
    else:
        print("The Number is Prime")

    



if __name__=="__main__":
    main()