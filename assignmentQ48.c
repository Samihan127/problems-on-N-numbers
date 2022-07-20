//accept N numbers from user and display all such numbers which contains 3 digits in it
//N:6
//elements:15 66 3 70 107 883
//output:107 883

#include<stdio.h>
#include<stdlib.h>

void digitscount(int arr[],int iLength)
{
   int iCnt=0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
	   
     if((arr[iCnt]>99)&&(arr[iCnt]<999))
     {
	    printf("%d\n",arr[iCnt]);
     }
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
   digitscount(p,iSize);
   free(p);
   
   return 0;
}