//accept N numbers from user and display sum of digits of each number
//N:6
//elements:15 66 3 70 107 883
//output:6 12 3 7 8 19

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int arr[],int iLength)
{
   int iCnt=0;

   for(iCnt=0;iCnt<iLength;iCnt++)
   {
	  int iDigit=0,iDigSum=0;
	  while(arr[iCnt]>0)
	  {
		iDigit=arr[iCnt]%10;
	   iDigSum=iDigSum+iDigit;
		arr[iCnt]=arr[iCnt]/10;
	  }
	  printf("%d\t",iDigSum);
   }
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
   DigitsSum(p,iSize);
   free(p);
   
   return 0;
}