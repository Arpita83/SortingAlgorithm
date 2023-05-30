#include<stdio.h>
 
void bubble(int a[],int n)
{
  int i,j,temp;
  int swap=0,comp=0;

  for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
        {
          if(a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            swap++;
          }
         comp++;
        }
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

 bubble(a,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}
