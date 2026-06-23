#include <stdio.h>

int  CountSmall (char *str)
{
    int iCount=0;
    char *Start=NULL;
    Start=str;
    while(*Start!='\0')
    {
        if(*Start>='a' && *Start<='z')
        {
           
            iCount++;
            
        }
         Start++;
    }
    return iCount;


}

int main()
{
    char cValue='\0';
    char Arr[50];
    int iRet=0;
    printf("Enter the String ");
    scanf("%[^'\n]s",Arr);
    iRet=CountSmall(Arr);
    printf("The Count of Small Character %d\n",iRet);


    return 0;
}