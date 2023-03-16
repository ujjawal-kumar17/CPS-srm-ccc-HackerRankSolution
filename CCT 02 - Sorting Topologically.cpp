#include <bits/stdc++.h>

#include <iostream>


 

using namespace std;


 

void dfs(int i, vector<vector<int>>& g, vector<bool>& vis, stack<int>& s) {

    vis[i] = true;

    for(int j: g[i]) {

        if(!vis[j]) dfs(j, g, vis , s);

    }

    s.push(i);

}


 

int main() {

    int N, M;

    cin>>N>>M;

    vector<vector<int>> g(N+1);

    for(int i=0;i<M;i++) {

        int a, b;

        cin>>a>>b;

        g[a].push_back(b);

    }

//sort in descending order

    for(int i=0;i<g.size();i++) {

        sort(g[i].begin(), g[i].end(), greater<int>());

    }

    

    vector<bool> vis(N+1, false);

    stack<int> s;

//DFS in descending order

    for(int i=N;i>=1;i--) {

        if(!vis[i]) dfs(i, g, vis, s);

    }

    while(!s.empty()) {

        cout<<s.top()<<' ';

        s.pop();

    }

}
