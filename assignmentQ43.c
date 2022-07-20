//accept N numbers from user and accept range,display all elements from that range
//N:6
//start:60
//end:90
//elements:85 66 3 76 93 88
//output:66 76 88

#include<stdio.h>
#include<stdlib.h>
void Range(int arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]>iStart) && (arr[iCnt]<iEnd))
		printf("%d",arr[iCnt]);
	}
}

///////////////////////////////////////////////////////////////
int main()
{
   int iSize=0,iValue1=0,iValue2=0,iCnt=0;
   int *p=NULL;
   
   printf("enter number of elements:");
   scanf("%d",&iSize);
   
   printf("enter starting point:");
   scanf("%d",iValue1);
   
   printf("enter ending point:");
   scanf("%d",iValue2);
   
   p=(int*)malloc(iSize*sizeof(int));
   if(p==NULL)
   {
	   printf("unable to allocate memory");
	   return -1;
   }
   printf("enter %d elements",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
	   printf("enter element:%d",iCnt+1);
	   scanf("%d",&p[iCnt]);
   }
   
   Range(p,iSize,iValue1,iValue2);
   
   free(p);
   
   return 0;
}