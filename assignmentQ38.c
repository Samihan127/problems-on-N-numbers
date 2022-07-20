//accept N number and check it contains 11 in it or not
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int arr[],int iLength)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==11)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}
//////////////////////////////////////////////////////////
int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;
	BOOL bRet=FALSE;
	 
	 printf("enter number of elements:");
	 scanf("%d",&iSize);
	 
	 p=(int*)malloc(iSize*sizeof(int));
	 if(p==NULL)
     {
	   printf("unable to allocate a memory");
	   return -1;
     }
     printf("enter %d elements\n",iSize);
	 
     for(iCnt=0;iCnt<iSize;iCnt++)
     {
	     printf("enter element %d:",iCnt+1);
	     scanf("%d",&p[iCnt]);
     }
	 bRet=Check(p,iSize);
	 if(bRet==TRUE)
	 {
		 printf("11 is present");
	 }
	 else
	 {
		 printf("11 is absent");
	 }
	 
	 free(p);

     return 0;
}