#include<stdio.h>

void insertion(int a[],int n)
{
  int i,j,temp,comp,swap;

  for(i=0;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    comp++;
      while(j>=0 && a[j]>temp)
      {
        a[j+1]=a[j];
        j--;
        swap++;
      }
    a[j+1]=temp;
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
 int comp,swap;

 insertion(a,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}
