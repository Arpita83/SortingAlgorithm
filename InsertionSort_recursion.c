#include<stdio.h>

void insertionrecursion(int a[],int n)
{
  int i,temp;
  if(n==0)
    return;

  insertionrecursion(a,n-1);

  int last = a[n-1];
  int j=n-2;
  while(j>=0 && a[j]>last)
  {
    a[j+1]=a[j];
    j--;
  }
  a[j+1]=last;
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

  insertionrecursion(a,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}



