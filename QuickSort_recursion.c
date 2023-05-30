#include<stdio.h>

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

int partition(int a[],int l,int h)
{
  int pivot=a[h];
  int i=l-1;

  int j;

  for(j=l;j<h;j++)
  {
    if(a[j]<pivot)
    {
      i++;
      swap(&a[i],&a[j]);
    }
  }
  swap(&a[i+1],&a[h]);
  return i+1;
}

void quicksort(int a[],int l,int h)
{
   if(l<h)
   {
     int pi=partition(a,l,h);
     quicksort(a,l,pi-1);
     quicksort(a,pi+1,h);
   }
}

int main()
{
 int n,i;
 printf("Enter the size of array : ");
  scanf("%d",&n);

  int a[n];
  printf("Enter the elements of array : ");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);

 quicksort(a,0,n-1);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}

