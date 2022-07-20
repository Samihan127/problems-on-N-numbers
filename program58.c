#include<stdio.h>

void display(int ptr[])
{
   int iCnt=0;
   printf("elements of array are:\n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   {
     printf("%d\n",ptr[iCnt]);
   }
}

int main()
{
   
   auto int arr[5];
   
   register int iCnt=0;
   
   printf("enter elements:\n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   { 
     scanf("%d",&arr[iCnt]);
   }
   
   display(arr);    //display(100);
   
   return 0;
}