#include <stdio.h>
int Difference (char *str)
{
    int iCntSmall=0;
    int iCntCaptial=0;

    while(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCntSmall++;
        }
        else if(*str>='A' && *str<='Z')
        {
            iCntCaptial++;
        }
        *str++;

    }
    return iCntSmall-iCntCaptial;

}
int main()
{
    char CValue='\0';
    char Arr[50];
    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);
    int iRet=0;
    iRet=Difference(Arr);
    printf("Difference of Freqeuncy of Small  to Large Frequency  %d \n",iRet);


    return 0;
}