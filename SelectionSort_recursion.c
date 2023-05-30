#include<stdio.h>

void selectionrecursion(int a[],int bi,int n)
{
  int i,temp;
  if(bi==n-1)
    return;

  int mi=bi;
  for(i=bi;i<n;i++)
  {
    if(a[i]<a[mi])
    {
      mi=i;
    }
  }
  temp=a[mi];
  a[mi]=a[bi];
  a[bi]=temp;

  selectionrecursion(a,bi+1,n);
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

  selectionrecursion(a,0,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}




