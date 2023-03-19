#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// required function
vector<string> processLogs(vector<string> logs, int threshold) {
    map<int, int> mp; // map to count transactions of each user

    // loop through the logs
    for(auto x: logs) {
        // extract users from string
        int sp1 = -1, sp2 = -1;
        for(int i = 0; i < x.size(); ++i) {
            if(x[i] == ' ') {
                if(sp1 == -1) sp1 = i;
                else sp2 = i;
            } 
        }    
        int from = stoi(x.substr(0, sp1));
        int to = stoi(x.substr(sp1 + 1, sp2 - sp1 - 1));

        // cout << from << " " << to << " " << endl;
        // increse count for different users
        if(to == from) {
            mp[to]++;
        }
        else {
            mp[to]++;
            mp[from]++;
        }
    }
    vector<string> ans;
    // loop through the map and extract users with count > threshold
    for(auto x: mp) {
        if(x.second >= threshold) {
            ans.push_back(to_string(x.first));
        }
    }
    // no need to sort as map is already sorted a/c to key
    return ans;
}

// driver program
int main() {
    // process user input
    int n, threshold;
    cin >> n;
    cin.ignore();
    vector<string> logs(n);

    for(int i = 0; i < n; ++i) {
        string temp;
        getline(cin, temp);
        logs[i] = temp;
    }
    cin >> threshold;

    // call the function
    vector<string> ans = processLogs(logs, threshold);
    // print the output
    for(auto s: ans) cout << s << endl;
}
