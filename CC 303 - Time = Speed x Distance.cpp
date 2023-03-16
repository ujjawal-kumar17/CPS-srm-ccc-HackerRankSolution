#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<queue>
#include<map>
using namespace std;

struct node{
    int p;
    map<int,node*> edges;
    node(int P){
        p=P;
    }
};
int main() {
    int n,m,p,q,t;
    cin>>n>>m>>p>>q>>t;
    if(p==q){
        cout<<0;
        return 0;
    }
    node* graph[n+1];
    bool visited[n+1]={0};
    for(int i=1;i<=n;i++){
        graph[i]=new node(i);
    }
    while(m--){
        int u,v;
        cin>>u>>v;
        if(u!=v){
        graph[u]->edges[v]=graph[v];
        graph[v]->edges[u]=graph[u];
        }
    }
    queue<node*>que;
    que.push(graph[p]);
    visited[p]=true;
    que.push(NULL);
    int tt=0;
    bool flag=0;
    while(!que.empty()){
        node* cur=que.front();
        que.pop();
        if(cur==NULL && !que.empty()){
                    tt+=t;
            que.push(NULL);
            continue;
        }
        else if(cur==NULL)
            break;
       // cout<<cur->p;
        if(cur==graph[q])
        {flag=1; break;}
        for(auto it:cur->edges){
            if(!visited[it.second->p]){
            que.push(it.second);
            visited[it.second->p]=true;
            }
        }
    }
    if(flag)
        cout<<tt;
    else cout<<-1;
    return 0;
}
