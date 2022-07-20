//accept N numbers display elements which are divisible by 11
//input   N :  6
//        elements:  85 66 3 55 93 88
//output:    88 66 55
 #include<stdio.h>
 #include<stdlib.h>
 void Display(int arr[],int iLength)
 {
	 int iCnt=0;
	 for(iCnt=0;iCnt<iLength;iCnt++)
	 {
		 if((arr[iCnt])%11==0)
		 {
			 printf("%d\n",arr[iCnt]);
		 }
	 }
 }
 /////////////////////////////////////////////////////////
 int main()
{
	 int iSize=0,iCnt=0;
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
	 Display(p,iSize);
	 free(p);
	 
	 return 0;
}
 