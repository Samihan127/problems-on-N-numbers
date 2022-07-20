//accept N numbers and return difference between summiation of even and odd elements
//input N:  6
//elements: 85 66 3 80 93 88
//output:   53(234-181)
	  
#include<stdio.h>
#include<stdlib.h>
int Difference(int arr[],int iLength)
{
	int iCnt=0;
	int iEvenSum=0,iOddSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			iEvenSum=iEvenSum+arr[iCnt];
		}
		else
		{
			iOddSum=iOddSum+arr[iCnt];
		}
	}
	return iEvenSum-iOddSum;
}
///////////////////////////////////////////////////////////
int main()
{
  int iSize=0,iRet=0,iCnt=0;
  int *p=NULL;
  
  printf("enter number of elements:\n");
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
  
  iRet=Difference(p,iSize);
  
  printf("result is %d",iRet);
  free(p);
 
  return 0;
} 