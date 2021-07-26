/* Binary Seach Program 

Time Complexity:: O(nlogn)
     Best case :: O(1)
     
Algorithm Binaryseacrch(array,low,high,key)
{
if(low>high)
     key not found
find mid=(low+high)/2
if(arr[mid]==key)
     print key found
else if(arr[mid]>key)
    recursive call Binarysearcg(array,low,mid-1,key)   
else if(arr[mid]<key)
    recursive call Binarysearcg(array,mid+1,high,key)   
}
*/
#include<stdio.h>
void BinarySearch(int [],int,int,int);

void BinarySearch(int arr[],int low,int high,int x)
{
	int mid;
	if(low>high)
	{
	printf("Oops! Key Not Found\n");
	return;
    } 
	mid=(low+high)/2;
	if(arr[mid]==x)
	{
	printf("Yeah! key found\n");
}
	else if(arr[mid]>x)
	{
		BinarySearch(arr,low,mid-1,x);
	}
	else if(arr[mid]<x)
	{
	    BinarySearch(arr,mid+1,high,x);
	}
}

int main()
{
	int arr[20],i,x,n;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("Enter Elements in the array \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the key to search : ");
	scanf("%d",&x);
	BinarySearch(arr,0,n,x);
	return 0;
}
