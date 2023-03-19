bool check(int n) {
    if (n <= 0) {
        return false; // 0 and negative numbers are not powers of 2
    }
    return (n & (n - 1)) == 0; // check if n is a power of 2
}
vector<int> isPower(vector<int> arr) {
    vector<int> ans;
for(auto &x:arr)
{
    if(check(x))
    {
        ans.push_back(1);
    }
    else
    {
        ans.push_back(0);
    }
}
return ans;
}
