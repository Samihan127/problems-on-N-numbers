#include<stdio.h>

void display(int arr[])
{
   int iCnt=0;
   printf("elements of array are:\n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   {
     printf("%d\n",arr[iCnt]);
   }
}

int main()
{
   
   auto int brr[5];
   
   register int iCnt=0;
   
   printf("enter elements:\n");
   
   for(iCnt=0;iCnt<5;iCnt++)
   { 
     scanf("%d",&brr[iCnt]);
   }
   
   display(brr);    //display(100);
   
   return 0;
}