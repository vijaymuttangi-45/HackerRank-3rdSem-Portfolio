#include <bits/stdc++.h>
using namespace std;


vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0, bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) alice++;
        else if (b[i] > a[i]) bob++;
    }

    return {alice, bob};
}

int main() {
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};
    vector<int> result = compareTriplets(a, b);
    cout << result[0] << " " << result[1] << endl;  // 1 1
    return 0;
}