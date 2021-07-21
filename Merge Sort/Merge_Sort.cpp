/*Program on Merge Sort
Complexity : Best::O(nlogn)
             Average::O(nlogn)
             Worst::O(nlogn)
Stable Algorithm
Algorithm MergeSort(Array,low,high)
{
if(low<high)
{ mid=(low+high)/2;
MergeSort(low,mid);
MergeSort(mid+1,high);
Merge(array,low,mid,mid+1,high);
}
Algorithm Merge(A,B,m,n)
{
i=1;j=1;k=1;
while(i<=m&& j<=n)
  if(a[i]<b[j])
  c[k++]=a[i++];
  else
  c[k++]=b[j++];
}
for(;i<=m;i++)
c[k++]=a[i];
 for(;j<=n;j++)
c[k++]=b[j];  

*/
#include<stdio.h>
void mergesort(int a[],int low,int high);
void merge(int a[],int ,int ,int ,int);
 
int main()
{
 int a[10],n,i;
 printf("Enter no of elements: ");
scanf("%d",&n);
printf("\nEnter array elements: \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
mergesort(a,0,n-1);
printf("\nSorted array is : ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
 
void mergesort(int a[],int low,int high)
{
int mid; 
if(low<high)
  {
     mid=(low+high)/2;
     mergesort(a,low,mid);    
     mergesort(a,mid+1,high);  
     merge(a,low,mid,mid+1,high);
  }
}
 
void merge(int a[],int x,int y,int z,int w)
{
int sort[10]; 
 int i,j,v;
i=x;   
j=z;   
v=0;
while(i<=y&& j<=w)  
 {
   if(a[i]<a[j])
   sort[v++]=a[i++];
   else
   sort[v++]=a[j++];
 }
while(i<=y)   
sort[v++]=a[i++];
while(j<=w)    
sort[v++]=a[j++];
for(i=x,j=0;i<=w;i++,j++)
a[i]=sort[j];
}


