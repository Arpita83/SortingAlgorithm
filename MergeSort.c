#include<stdio.h>

int min(int x,int y)
{
  if(x<y)
    return x;
  else
    return y;
}

void merge(int a[],int l,int m,int r)
{
  int i,j,k;
  int n1=m-l+1;
  int n2=r-m;

  int L[n1],R[n2];

  for(i=0;i<n1;i++)
     L[i]=a[l+i];
  for(j=0;j<n2;j++)
     R[j]=a[m+1+j];

  i=0;
  j=0;
  k=l;

  while(i<n1 && j<n2)
  {
    if(L[i]<=R[j])
    {
      a[k]=L[i];
      i++;
    }
    else
    {
      a[k]=R[j];
      j++;
    }
    k++;
  }

  while(i<n1)
  {
    a[k]=L[i];
    i++;
    k++;
  }

  while(j<n2)
  {
    a[k]=R[j];
    j++;
    k++;
  }
}

void mergesort(int a[],int n)
{
  int cur,left;

  for(cur=1;cur<n;cur=2*cur)
  {
    for(left=0;left<n-1;left+=2*cur)
    {
      int m=min(left+cur-1,n-1);
      int r=min(left+2*cur-1,n-1);

      merge(a,left,m,r);
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

 mergesort(a,n);

 for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}

