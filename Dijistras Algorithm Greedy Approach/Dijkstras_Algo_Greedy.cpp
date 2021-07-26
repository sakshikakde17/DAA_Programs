/* Dijkstras Algorithm C Program
-----Single Source Shortest Path------
-----------Greedy Approach------------
Complexity :: O(n*n) 
n vertices and n vertices are relaxed hence n*n
*/

#include<stdio.h>
#define MAX 20
#define INFINITY 9999
void dijkstra(int graph[MAX][MAX],int n,int startnode);

int main()
{
	int graph[MAX][MAX],i,j,n,u;
	printf("Enter no of Vertices : ");
	scanf("%d",&n);
	printf("Enter the Adjacency Matrix : \n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&graph[i][j]);
	printf("Enter Starting Node : ");
	scanf("%d",&u);
	dijkstra(graph,n,u);
	return 0;
}
void dijkstra(int graph[MAX][MAX],int n,int startnode)
{
int cost[MAX][MAX],distance[MAX],pred[MAX];
int visited[MAX],count,mindistance,nextnode,i,j;
for(i=0;i<n;i++)             # If Direct Path Is not Present
	for(j=0;j<n;j++)         # Then give the cost of That edges as 
	if(graph[i][j]==0)	     # infinity
     cost[i][j]=INFINITY;
 else
 cost[i][j]=graph[i][j];
 for(i=0;i<n;i++)
 {
 	distance[i]=cost[startnode][i];
 	pred[i]=startnode;
 	visited[i]=0;
 }
distance[startnode]=0;
visited[startnode]=1;
count=1;
while(count<n-1)
{
	mindistance=INFINITY;
	for(i=0;i<n;i++)
	if(distance[i]<mindistance&&!visited[i])
	{
		mindistance=distance[i];
	nextnode=i;	
	}
	visited[nextnode]=1;
	for(i=0;i<n;i++)
	if(!visited[i])
	if(mindistance+cost[nextnode][i]<distance[i])
	{
		distance[i]=mindistance+cost[nextnode][i];
		pred[i]=nextnode;
	}
	count++;
}
for(i=0;i<n;i++)
if(i!=startnode)
{
printf("\n Distance of node %d = %d ",i,distance[i]);
printf("\n Path = %d ",i);
j=i;
do
{
	j=pred[j];
	printf("<- %d ",j);
	}
	while(j!=startnode);	
}
}








