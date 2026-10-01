#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seqList(n);
    vector<int> result;
    int lastAnswer = 0;

    for (auto& query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int seqIndex = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[seqIndex].push_back(y);
        } else {
            int idx = y % seqList[seqIndex].size();
            lastAnswer = seqList[seqIndex][idx];
            result.push_back(lastAnswer);
        }
    }

    return result;
}

int main() {
    // Example test
    int n = 2;
    vector<vector<int>> queries = {{1, 0, 5}, {1, 1, 7}, {1, 0, 3}, {2, 1, 0}, {2, 1, 1}};
    vector<int> result = dynamicArray(n, queries);
    for (int val : result) cout << val << " ";
    cout << endl;
    return 0;
}