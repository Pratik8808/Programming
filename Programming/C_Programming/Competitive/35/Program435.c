    #include <stdio.h>
    #define TRUE 1
    #define FALSE 0
    typedef int BOOL;
    typedef unsigned int UNIT;

    //Check if BIT of  7 & 8 & 9  is on or off
    BOOL chk(UNIT iNO)
    {
    UNIT iMask1=0x01;
    UNIT iMask2=0x01;
    UNIT iMask3=0x01;
    UNIT iMask4=0x01;
    BOOL flag=FALSE;

    iMask1=iMask1<<7-1;
    iMask2=iMask2<<8-1;
    iMask3=iMask3<<9-1;



    UNIT iMask=iMask1 |iMask2|iMask3;

    if((iMask & iNO)==iMask)
    {
        flag=TRUE;
    }
    
    return flag;

    }

    int main()
    {
        UNIT iValue=0;
        printf("Enter the Value \n");
        scanf("%d",&iValue);
        BOOL bRet=chk(iValue);

        if(bRet)
        {
            printf("It bit on 7 ,8, 9");
        }
        else
        {
            printf("All bits are not on ");
        }

    }