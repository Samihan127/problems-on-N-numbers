//accept N numbers from user and return product of all odd elements
//N:6
//elements:15 66 3 70 10 88
//output:45

#include<stdio.h>
#include<stdlib.h>
int product(int arr[],int iLength)
{
	int iCnt=0;
	int iMul=1;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt])%2!=0)
		iMul=iMul*arr[iCnt];
	}
	return iMul;
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
   iRet=product(p,iSize);
   printf("product is %d",iRet);
   free(p);
   
   return 0;
}