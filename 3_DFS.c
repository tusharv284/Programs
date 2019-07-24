#include <stdio.h>
#include <stdlib.h>

#define size 20

int v[size*size], n, a[][size], s, count=0;

void dfs(int a[][size], int v[], int n, int s);

int main()
{
	int i, j;
	printf("Enter the number of nodes: ");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	
//for(i=0;i<n;i++)
		//for(j=0;j<n;j++)
			//if(a[i][j] != a[j][i])
			//{
				//printf("Enter matrix is not symmetric!\n");
				//exit(1);
			//}
	for(i=0;i<n;i++)
		v[i] = 0;
	for(i=0;i<n;i++)
	{
	F	if(v[i] == 0)
		{
			printf("The order of traversal is:\n");
			dfs(a, v, n, i);
			count++;
		}
	}
	printf("\n");
	if(count == 1)
		printf("All nodes are connected.\n");
	else
		printf("The graph is disconnected and there are %d number of components\n.", count);
}

void dfs(int a[][size], int v[], int n, int s)
{
	int i;
	v[s] = 1;
	printf("%d ", s);
	for(i=0;i<n;i++)
	{
		if(v[i]==0 && a[s][i]==1)
			dfs(a, v, n, i);
	}
}
