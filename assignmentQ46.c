//accept N numbers from user and return smallest number
//N:6
//elements:15 66 3 70 10 88
//output:3

#include<stdio.h>
#include<stdlib.h>

int minimum(int arr[],int iLength)
{
   int iCnt=0;
   int iMin=arr[iCnt];
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
	   
     if(arr[iCnt]<iMin)
     {
	    iMin=arr[iCnt];
     }
   }
   return iMin;
}

///////////////////////////////////////////////////////////////
int main()
{
   int iSize=0,iRet=0,iCnt=0;
   int *p=NULL;
   
   printf("enter number of elements:");
   scanf("%d",&iSize);
   
   p=(int*)malloc(iSize*sizeof(int));
   if(p==NULL)
   {
	   printf("unable to allocate memory");
	   return -1;
   }
   printf("enter %d elements\n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
	   printf("enter element %d:",iCnt+1);
	   scanf("%d",&p[iCnt]);
   }
   iRet=minimum(p,iSize);
   printf("maximum number  is %d",iRet);
   free(p);
   
   return 0;
}