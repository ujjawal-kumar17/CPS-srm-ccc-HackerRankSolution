vector<int> getOneBits(int n) {
    int count = 0;
    vector<int> bits;
    int pos = 1;
    while (n > 0) {
        if (n & 1) {
            count++;
            bits.push_back(1);
        }else{
                bits.push_back(0);
        }
        pos++;
        n >>= 1;
    }
    reverse(bits.begin(), bits.end());
    for(auto it : bits)cout<<it<<" ";
    cout<<endl;
    vector<int> result;
    result.push_back(count);
    for (int i = 0; i < bits.size(); i++) {
            if(bits[i] == 1)
                result.push_back(i+1);
    }
    return result;
}
