#include<stdio.h>

int getmax(int a[],int n)
{
  int max=a[0];
  int i;

  for(i=0;i<n;i++)
     if(a[i]>max)
        max=a[i];

  return max;
}

void countsort(int a[],int n)
{
  int max=getmax(a,n);
  int out[n];
  int count[max+1];
  int i;

  for(i=0;i<=max;i++)
     count[i]=0;

  for(i=0;i<n;i++)
     count[a[i]]++;

  for(i=0;i<=max;i++)
     count[i]+=count[i-1];

  for(i=n-1;i>=0;i--)
  {
    out[count[a[i]]-1]=a[i];
    count[a[i]]--;
  }

  for(i=0;i<n;i++)
    a[i]=out[i];
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

  countsort(a,n);

  printf("Sorted array : ");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);
 return 0;
}

