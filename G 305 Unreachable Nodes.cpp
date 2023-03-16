#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
int t=0;
bool vis[N];
void dfs(int a){
    t++;
    vis[a]=true;;
    for(int child:graph[a]){
        if(vis[child])continue;
        dfs(child);
        
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int p;
    cin>>p;
    dfs(p);
    cout<<n-t<<endl;
    return 0;
}
