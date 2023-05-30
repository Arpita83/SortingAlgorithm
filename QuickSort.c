#include<stdio.h>

void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}

int partition(int a[],int l,int h)
{
  int pivot = a[h];
  int i=l-1;
  int j;

  for(j=l;j<h;j++)
  {
   if(a[j]<=pivot)
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
  int stack[h-l+1];
  int top=-1;

  stack[++top]=l;
  stack[++top]=h;

  while(top>=0)
  {
    h=stack[top--];
    l=stack[top--];

    int p=partition(a,l,h);

    if(p-1>l)
    {
      stack[++top]=l;
      stack[++top]=p-1;
    }
    if(p+1<h)
    {
      stack[++top]=p+1;
      stack[++top]=h;
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

 quicksort(a,0,n-1);

 for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}
