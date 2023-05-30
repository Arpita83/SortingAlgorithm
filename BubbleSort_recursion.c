#include<stdio.h>

void bubblerecursion(int a[],int ei)
{
  int i,temp;
  if(ei==0)
    return;

  for(i=0;i<ei;i++)
  {
    if(a[i]>a[i+1])
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }

  bubblerecursion(a,ei-1);
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

  bubblerecursion(a,n-1);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}


