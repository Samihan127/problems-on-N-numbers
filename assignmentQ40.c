//accept N numbers from user and accept another number NO
//and check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check (int arr[],int iLength,int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	   if(arr[iCnt]==iNo)
	   {
	     return TRUE; 
	   }
	}
}
//////////////////////////////////////////////////////////
int main()
{
  int iSize=0,iValue=0,iCnt=0;
  int *p=NULL;
  BOOL bRet=FALSE;
  
  printf("enter number of elements:");
  scanf("%d",&iSize);
  
  printf("enter a number:");
  scanf("%d",&iValue);
  
  p=(int*)malloc(iSize*sizeof(int));
  
  if(p==NULL)
  {
	  printf("unable to allocate memory");
	  return -1;
  }
  printf("enter %d elements\n",iSize);
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	  printf("enter %d element::",iCnt+1);
	  scanf("%d",&p[iCnt]);
  }
  bRet=Check(p,iSize,iValue);
  if(bRet==TRUE)
  {
	  printf("number is present");
  }
  else
  {
	  printf("number is not present");
  }
  
  free(p);
  
  return 0;
}