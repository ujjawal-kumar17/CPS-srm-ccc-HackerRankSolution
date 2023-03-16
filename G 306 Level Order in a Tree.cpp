#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int bfs(vector<vector<int>> v, int nodes, int x) 
{
    vector<int> levels(nodes + 1, 0);
    queue<int> q;
    vector<bool> visited(nodes + 1, false);
    int node;
    
    q.push(1);
    levels[1] = 1;
    visited[1] = true;
    
    while (!q.empty()) 
    {
        node = q.front();
        q.pop();
        for (int i = 0; i < v[node].size(); i++) 
        {
            if (visited[v[node][i]] == false) {
                q.push(v[node][i]);
                levels[v[node][i]] = levels[node] + 1;
                visited[v[node][i]] = true;
            }
        }
    }
    
    int count = 0;
    for (int i = 1; i < nodes + 1; i++) 
    {
        if (levels[i] == x) count += 1;    
    }
    
    return count;
}

int main() 
{
    bool run = true;
    int nodes, edge1, edge2, x;
    cin >> nodes;
    vector<vector<int>> v(nodes + 1);
    
    for (int i = 0; i < nodes - 1; i++) 
    {
        cin >> edge1;
        cin >> edge2;

        v[edge1].push_back(edge2);
        v[edge2].push_back(edge1);
    }
    cin >> x;
    cout << bfs(v, nodes, x);
}
