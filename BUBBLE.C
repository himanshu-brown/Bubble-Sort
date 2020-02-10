#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{
 void bubblesort(int []);
 int arr[SIZE],i;
 clrscr();
 printf("Enter the element of array");
 for(i=0;i<SIZE;i++)
 scanf("%d",&arr[i]);
 bubblesort(arr);
 getch();
}
void bubblesort(int arr[])
{
 int first=0,end=SIZE-1,i,temp;
 while(end>first)
 {
  for(i=0;i<end;i++)
  {
   if(arr[i]>arr[i+1])
   {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
   }
  }
  end--;
 }
 for(i=0;i<SIZE;i++)
 printf("%d",arr[i]);
}
