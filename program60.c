#include<stdio.h>
#include<stdlib.h>   //for malloc and free

void display(int arr[],int iLength)
{
   int iCnt=0;
   printf("elements of array are:\n");
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
     printf("%d\n",arr[iCnt]);
   }
}

int main()
{
   //auto int brr[5];  static memort allocation
   int *ptr=NULL;
   register int iCnt=0;
   int iSize=0;
   
   printf("enter number of elements:\n");
   scanf("%d",&iSize);
   
   ptr=(int *)malloc(iSize*sizeof(int));
   
   printf("enter elements:\n");
   
   for(iCnt=0;iCnt<iSize;iCnt++)
   { 
     scanf("%d",&ptr[iCnt]);
   }
   
   display(ptr,iSize);    //display(100);
   free(ptr);
   return 0;
}