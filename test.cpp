#include<iostream>

using namespace std;

int getmax(int a[],int n)
{
  int max,i;
  max=a[0];
   for(i=1;i<n;i++)
    {
      if(a[i]>max)
        max=a[i];  
    }
  return max;  
}

void bucketsort(int a[],int n)
{
  int max=getmax(a,n);
  int b[max+1] = {0};
  int i,j;
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
 int n;
 printf("Enter the size of array : ");
  scanf("%d",&n);

  int a[n];
  int i;
  printf("Enter the elements of array : ");
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
 int comp,swap;

 bucketsort(a,n);

  printf("After sorting : \n");
  for(i=0;i<n;i++)
     printf("%d ",a[i]);

 return 0;
}
