//accept N number and return frequency of 11 from it
#include<stdio.h>
#include<stdlib.h>

int Frequency(int arr[],int iLength)
{
	int iCnt=0;
	int iFcnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==11)
		{
			iFcnt++;
		}	
	}
	return iFcnt;
}
//////////////////////////////////////////////////////////
int main()
{
	int iSize=0,iRet=0,iCnt=0;
	int *p=NULL;
	 
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
	 iRet=Frequency(p,iSize);
	 printf("%d",iRet);
	 free(p);

     return 0;
}