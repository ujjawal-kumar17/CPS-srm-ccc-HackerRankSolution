#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int visited[1000],adj[1000][1000];
int min = 1001,max=0,count=1;
int n,m;

void dfs(int i)
{
    visited[i] = 1;//start node visited
    for(int j=0; j<n; j++)
    {
        if(visited[j] == 0 && adj[i][j] == 1)
        {
            count++;
            dfs(j);
        }
    }    
    if(count < min)
        min = count;
    if(count > max)
        max = count;
}

int main() 
{
    scanf("%d%d",&n,&m);    
    for(int i=0; i<m; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);        
        adj[x-1][y-1] = 1;
        adj[y-1][x-1] = 1;
    }
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(visited[i] == 0)
        {
            count = 1;
            dfs(i);
            x++;
        }
    }
    if(count < min)
        min = count;    
    if(count > max)
        max = count;    
    if(x==1)
        min = max;    
    printf("%d %d %d",max,min,x);
    return 0;
}
