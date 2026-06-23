#include <stdio.h>

int CountCapital(char *str)
{
   int iCnt=0;
   char *start=NULL;
   start=str;


   while(*start!='\0')
   {
     if(*start>='A' && *start<='Z')
     {
      iCnt++;
     
       
     }
      start++;


   }
   return iCnt;


}

int main()
{
   char arr[50];
   int iRet=0;
    
   printf("Enter String\n");
   scanf("%[^\n]s",arr);
 

   iRet=CountCapital(arr);

   printf(" The Count of the  Capital Character is  %d \n",iRet);


   return 0;
}