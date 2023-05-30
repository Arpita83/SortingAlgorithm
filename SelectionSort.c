#include<stdio.h>

void selection(int a[],int n)
{
  int i,j,temp;
  int min,loc;
  int swap=0,comp=0;

  for(i=0;i<n;i++)
  {
    min=a[i];
    loc=i;
    comp++;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<min)
      {
        min=a[j];
        loc=j;
      }
    }

   temp=a[i];
   a[i]=a[loc];
   a[loc]=temp;
   swap++;
  }

  printf("\nNo. of comparisons : %d \n",comp);
  printf("No. of swaps : %d \n",swap);
}

int main()
{
 int n;
 printf("Enter the size of array : ");
  scanf("%d",&n);

  int a[n];
  int i;
  printf("Enter the elements of array : ");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);

  selection(a,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}

