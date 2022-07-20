#include<stdio.h>

int main()
{
   
   auto int arr[5];
   
   register int iCnt=0;
   
   printf("enter elements:\n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   { 
     scanf("%d",&arr[iCnt]);
   }
   
   printf("elements of array are:\n");
   for(iCnt=0;iCnt<5;iCnt++)
   {
     printf("%d\n",arr[iCnt]);
   }
   return 0;
}