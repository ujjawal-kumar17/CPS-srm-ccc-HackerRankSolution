#include <bits/stdc++.h>
using namespace std;

int LCS(vector<int>& a,
        vector<int>& b)
{

   

    unordered_map<int, int> mp;

    for (int i = 0; i < a.size(); i++) {
        mp[a[i]] = i + 1;
    }

    vector<int> temp;

    for (int i = 0; i < b.size(); i++) {

        if (mp.find(b[i]) != mp.end()) {

            temp.push_back(mp[b[i]]);
        }
    }

    vector<int> tail;

    tail.push_back(temp[0]);

    for (int i = 1; i < temp.size(); i++) {

        if (temp[i] > tail.back())
            tail.push_back(temp[i]);

        else if (temp[i] < tail[0])
            tail[0] = temp[i];

        else {
            auto it = lower_bound(tail.begin(),
                                tail.end(),
                                temp[i]);
            *it = temp[i];
        }
    }
    return (int)tail.size();
}


int main()
{
    int n;
    cin >> n;
    vector<int> a ;
    for(int i=0;i<n;i++){
        int k;
        cin >>k;
        a.push_back(k);
    }
    vector<int>b;
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int p;
        cin >>p;
        b.push_back(p);
    }
    cout << LCS(a,b);
    return 0;
}
