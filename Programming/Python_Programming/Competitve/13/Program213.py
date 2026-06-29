

def AreaCircle(Radius):
    return 3.14*Radius*Radius

def main():

    Value2=int(input("Enter the Radius"))
    Result=AreaCircle(Radius=Value2)

    print("Are of Rectangle is ",Result)

if __name__=="__main__":
    main()