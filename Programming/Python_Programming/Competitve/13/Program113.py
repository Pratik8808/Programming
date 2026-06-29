def AreaRectangle(Length,Breath):
    return Length*Breath

def main():
    Value1=int(input("Enter the Length"))
    Value2=int(input("Enter the Breadth"))

    Result=AreaRectangle(Breath=Value1,Length=Value2)

    print("Are of Rectangle is ",Result)

if __name__=="__main__":
    main()