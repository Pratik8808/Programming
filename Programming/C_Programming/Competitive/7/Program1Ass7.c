#include <stdio.h>
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt<=iNo)
        {
            printf("%c\t",'*');
        }
        else if(iCnt>=iNo) {
            printf("%c\t",'#');
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}