def chekVowel(chr):
    flag=False
    if((chr>='a' and chr<='z') or (chr>='A' and chr<='Z')):
            if(chr=='a' or chr=='e' or chr=='i' or chr=='u' or chr=='o' or chr=='A' or chr=='E' or chr=='I' or chr=='O' or chr=='U'):
                flag=True

    return flag


def main():
    Value=(input("Enter the Character to Check if Vowel or not :   ")[0])
    Ret=chekVowel(Value)
    if(Ret):
        print("Vowel")
    else:
        print("Not Vowel")


if __name__=="__main__":
    main()