#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        primary_sum += arr[i][i];
        secondary_sum += arr[i][n - 1 - i];
    }

    return abs(primary_sum - secondary_sum);
}

int main() {
    // Example test
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {9, 8, 9}};
    cout << "Diagonal Difference: " << diagonalDifference(arr) << endl;
    return 0;
}