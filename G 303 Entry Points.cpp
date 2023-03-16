#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> count(n,0);
    int max = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int ele;
        cin >> ele;
        if(ele==-1){
            continue;
        }
        count[ele]++;
    }
    for(int i=0;i<n;i++){
        if(count[i]>max){
            max = count[i];
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
