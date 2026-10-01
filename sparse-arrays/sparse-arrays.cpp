#include <bits/stdc++.h>
using namespace std;


vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    unordered_map<string, int> freq;

    for (const string& s : strings) {
        freq[s]++;
    }

    vector<int> result;
    for (const string& q : queries) {
        result.push_back(freq[q]);
    }

    return result;
}

int main() {
    vector<string> strings = {"aba", "baba", "aba", "xzxb"};
    vector<string> queries = {"aba", "xzxb", "ab"};

    vector<int> result = matchingStrings(strings, queries);
    for (int x : result) cout << x << " ";
    cout << endl;   // 2 1 0
    return 0;
}