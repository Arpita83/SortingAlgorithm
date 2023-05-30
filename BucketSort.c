#include<stdio.h>

int getmax(int a[],int n)
{
  int max=a[0];

  for(int i=0;i<n;i++)
  {
    if(a[i]>max)
        max=a[i];
  }

  return max;
}

void bucket(int a[],int n)
{
  int max=getmax(a,n);
  int b[max+1];
  int i,j;

  for(i=0;i<=max;i++)
    b[i]=0;

  for(i=0;i<n;i++)
    b[a[i]]++;

  for(i=0,j=0;i<=max;i++)
  {
    while(b[i]>0)
    {
      a[j++]=i;
      b[i]--;
    }
  }
}

int main()
{
 int n,i;
 printf("Enter the size of array : ");
 scanf("%d",&n);

 int a[n];

 printf("Enter the elements : ");
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);

 bucket(a,n);

 for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}

