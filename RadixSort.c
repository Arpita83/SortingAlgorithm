#include<stdio.h>

int getmax(int a[],int n)
{
  int max=a[0];

  for(int i=1;i<n;i++)
  {
    if(a[i]>max)
        max=a[i];
  }
 return max;
}

void countsort(int a[],int n,int place)
{
  int out[n+1];
  int count[10]={0};
  int i;

  for(i=0;i<n;i++)
    {
      count[(a[i]/place)%10]++;
    }
  for(i=1;i<10;i++)
  {
    count[i]+=count[i-1];
  }

  for(i=n-1;i>=0;i--)
  {
    out[count[(a[i]/place)%10]-1]=a[i];
    count[(a[i]/place)%10]--;
  }
  for(i=0;i<n;i++)
  {
   a[i]=out[i];
  }
}

void radixsort(int a[],int n)
{
  int i;
  int max=getmax(a,n);

  for(i=1;max/i>0;i*=10)
    countsort(a,n,i);
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

  radixsort(a,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}


