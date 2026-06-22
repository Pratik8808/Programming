#include <stdio.h>

void DisplaySchedule(char ch)
{
    if(ch=='A'||ch=='a')
    {
        printf("Exams at 7:00 Am\n");
    }
    else if(ch=='B'||ch=='b')
    {
        printf("Exam at  8:30Am\n");
    }

     else if(ch=='C'||ch=='c')
    {
        printf("Exam at  9:20Am\n");
    }

       else if(ch=='D'||ch=='d')
    {
        printf("Exam at  10:30Am\n");
    }
    else 
    {
        printf("Wrong Division Input");
    }
}


int main()
{ 
    char cValue='\0';
   printf("Enter Your Division for exam timing\n");
   scanf("%c",&cValue);

   DisplaySchedule(cValue);
   
   

    return 0;
}