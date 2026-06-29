def CheckDivisbility(No):
     
    if((No%3==0) and (No%5)==0):
        return True
    else:
        return False
    

def main():
   Value1=int(input("Enter the Number to check whether it divisble by 5 and 3 :"))
   Ret=CheckDivisbility(Value1)

   if(Ret):
       print("Number is Divisble by 3 and 5")
   else:
       print("Number is Not Divisble by 3 or 5")
       

if __name__=="__main__":
    main()