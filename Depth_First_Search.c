#include<stdio.h>
#include<stdlib.h>
#define MAX 10
//DFS using Adjancey Matrix
int i, visited[MAX];
char vertex[MAX];
//adjancey matrix
int graph[MAX][MAX]={{0,1,0,1,0},{1,0,1,0,0},{0,1,0,0,0},{1,0,0,0,1},{0,0,0,1,0}};
void dfs(int currentVertex){
	printf("%c",vertex[currentVertex]);
	visited[currentVertex]=1;
	for (i=0;i<MAX;i++){
		if(visited[i]==0){
			//Recursive calling dfs() i.e implementing stack
			dfs(i);
		}
	}
}
int main()
{
	//Adding vertext to the graph
	vertex[0]= 'A';
	vertex[1]='B';
	vertex[2]='C';
	vertex[3]='D';
	vertex[4]='E';
	//Assuming Vertex A as root
	dfs(0);
	return 0;
}
