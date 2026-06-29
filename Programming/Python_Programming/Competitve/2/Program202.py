def ChkGreater(No1 ,No2):
    if(No1==No2):
        print("Both Number are Same")
    elif(No1>No2):
        print("The Number",No1,"is Greater Number")
    else:
        print("The Number ",No2,"is Greater Number")

def main():
    print("Jay Ganesh ....")
    Value1=int(input("Enter the First  Number "))
    Value2=int(input("Enter the Second Number"))
    ChkGreater(Value1,Value2)

if __name__=="__main__":
    main()
