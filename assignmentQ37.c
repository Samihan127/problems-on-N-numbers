//accept N numbers display diff btw frequency of even number and odd number

//input   N :  7
//        elements:  85 66 3 80 93 88 90
//output:   1(4-3)
 #include<stdio.h>
 #include<stdlib.h>
 int Frequency(int arr[],int iLength)
 {
	 int iCnt=0;
	 int iEcnt=0;
	 int iOcnt=0;
	 for(iCnt=0;iCnt<iLength;iCnt++)
	 {
		 if((arr[iCnt])%2==0)
		 {
			 iEcnt++;
		 }
		 else
		 {
			 iOcnt++;
		 }
	 }
	 return iEcnt-iOcnt;
 }
 /////////////////////////////////////////////////////////
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
	 printf("result is %d",iRet);
	 free(p);
	 
	 return 0;
}
 