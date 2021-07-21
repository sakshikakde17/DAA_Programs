/* Program For QUICK SORT
Complexity : Best case ::O(nLogn)
             Worst case :: O(n^2)
Algorithm:
    QuickSort(array,low,high)
    {
    if(low<high)
      {
      j=Partition(array,low,high);
      QuickSort(low,j);
      QuickSort(j+1,high);
      }
    }
    Partition(array,low,high)
    {
      pivot=Array[low];
      i=low,j=high;
      while(i<j)
        {do{i++;}
      while(Array[i]<=pivot)
        {do{j--;}
      while(Array[j]>pivot);
    if(i<j)
      swap(Array[i],Array[j]);
    } swap(Array[low],Array[j]);
    return j;
    }
*/
#include <stdio.h>
void quicksort(int [], int, int);
int partition(int [], int, int);

 int main()
{
 int a[10];
 int n, i;
 
printf("Enter the no  of elements: ");
scanf("%d", &n); 
printf("Enter the elements:\n");
for (i = 0; i <n; i++)
 {
    scanf("%d", &a[i]);
 } 
printf("Elements Before Sorting : \n");
for (i = 0; i <n; i++)
 {
    printf("%d ", a[i]);
 }
quicksort(a, 0, n - 1);
printf("Elements After Sorting : ");
for (i = 0; i <n; i++)
 {
    printf("%d ", a[i]);
 }
return 0;
}

void quicksort(int a[], int low, int high)
{
int j;
if (low < high)
 {
    j=partition(a,low,high);
    quicksort(a, low, j - 1);
    quicksort(a, j + 1, high);
 }
}

int partition(int a[],int low, int high)
{
 int pivot, i, j, temp;
 pivot = low;
 i = low;
 j = high;
while (i < j) 
 {
  while (a[i] <= a[pivot] && i <= high)
    {
       i++;
    }
  while (a[j] > a[pivot] && j >= low)
    {
       j--;
    }
  if (i < j)
  {
     temp = a[i];
  a[i] = a[j];
  a[j] = temp;
  }
}
  temp = a[j];
  a[j] = a[pivot];
 a[pivot] = temp;
return j;
}

