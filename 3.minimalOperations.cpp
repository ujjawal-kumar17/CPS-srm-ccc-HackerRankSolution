int check(string s) {
        int count = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                count++;
                i++;
            }
        }
        return count;
    }
vector<int> minimalOperations(const vector<string>& words) {
    vector<int> result;
    for (const auto& word : words) {
        result.push_back(check(word));
    }
    return result;
}
