//accept N numbers from user and accept one number as NO 
//return index of first occurence of NO

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int arr[],int iLength,int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		
		if(arr[iCnt]==iNo)
		{
		   return iCnt+1;
		}
		
	}
	return -1;
	

}

///////////////////////////////////////////////////////////
int main()
{ 
  int iSize=0,iValue=0,iCnt=0;
  int *p=NULL;
  int iRet=0;
  
  printf("enter number of elements:\n");
  scanf("%d",&iSize);
  
  printf("enter the number:\n");
  scanf("%d",&iValue);
  
  p=(int*)malloc(iSize*sizeof(int));
  
  if(p==NULL)
  {
	  printf("unable to allocate memory");
	  return -1;
  }
  printf("enter %d elements:\n",iSize);
  
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
	  printf("enter element:%d\n",iCnt+1);
	  scanf("%d",&p[iCnt]);
  }
  iRet=FirstOcc(p,iSize,iValue);
  
  if(iRet==-1)
  {
	  printf("there is no such number");
  }
  else
  {
	  printf("first occurence of number is %d",iRet);
  }
  
  free(p);
  
  return 0;
}