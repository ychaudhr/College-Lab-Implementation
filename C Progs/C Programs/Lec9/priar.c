#include<stdio.h>
#include<conio.h>
void main()
	{
	     int ar[100],i,n,j,counter;
	      
	     printf("Enter the size of the array ");
	     scanf("%d",&n);
	     printf("\n Now enter the elements of the array");
	     for(i=0;i<n;i++)
	     {
	           scanf("%d",&ar[i]);
	     }
	      
	     printf(" Array is -");
	     for(i=0;i<n;i++)
	     {
	           printf("\t %d",ar[i]);
	     }
	      
	     printf("\n All the prime numbers in the array are -");
	     for(i=0;i<n;i++)
	     {
	           counter=0;
	           for(j=2;j<ar[i];j++)
	           {
	                 if(ar[i]%j==0)
	                 {
	                       counter=1;
	                       break;
	                 }
	           }
	           if(counter==0)
	           {	                 printf("\t %d",ar[i]);
	           }
	     }
	}
