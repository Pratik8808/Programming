def Marks(Mark):
     if(Mark>=75):
         print("Distinction")
     elif(Mark>=60 and Mark<75):
         print("First Class")

     elif(Mark>=50 and Mark<=59):
         print("Second Class")
     else:
         print("Fail")


     
     


def main():

    marks=int(input("Enter the Marks: "))
    Marks(marks)
if __name__=="__main__":
    main()