#include<stdio.h>

int jobsequence(int d[5],int j[5],int n)
{
	int q,i,r,k;
	d[0]=0;
	j[0]=0;
	j[1]=1;
	k=1;
	for(i=2;i<=n;i++)
	{
		r=k;
		while((d[j[r]]>d[i])&&(d[j[r]]!=r))
   if((d[j[r]]<=d[i])&&(d[i]>r))
   {
   	for(q=k;q>=r+1;q--)
   	{
   		j[q+1]=j[q];
	   }
	   j[r+1]=i;
	   k=k+1;
   }
	}
	return k;
}
int main()
{
	int d[5],j[5],p[5],k,i;
	printf("Enter The Deadlines");
	for(i=0;i<5;i++)
	{
		scanf("%d",&d[i]);
	}
	printf("Enter The Profits");
	for(i=0;i<5;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Enter The Deadlines");
	for(i=0;i<5;i++)
	j[i]=i;
	k=jobsequence(d,j,4);
	printf("\n The Job Sequence is : ");
	printf("Enter The Deadlines");
	for(i=0;i<k;i++)
	printf("%d",j[i]);
	return 0;
}
