#include<stdio.h>

void shell(int a[],int n)
{
  int i,j,k,temp;

  for(i=n/2;i>0;i=i/2)
  {
    for(j=i;j<n;j++)
    {
      for(k=j-i;k>=0;k=k-i)
      {
        if(a[k+i]>a[k])
            break;
        else
          {
            temp=a[k];
            a[k]=a[k+i];
            a[k+i]=temp;
          }
      }
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

 shell(a,n);

 for(i=0;i<n;i++)
    printf("%d ",a[i]);

 return 0;
}


